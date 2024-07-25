#!/usr/bin/env python

""" ===================== serial_communication.py ====================
This program allows the serial communication with the SCU to control the lift (Actuator 1 and 2)

Documentation on the interface: https://medialibrary.ewellix.com/asset/16222

==================================================================="""

import serial
import crc16
import threading

global sem

# Get appropriate parameters for request based on command
#No modification
def get_param(cmd, option, data=0): 
    if(cmd == "RO"):  # open remote mode
        param = [0] 
    elif(cmd == "RC"):  # remote cyclic
        param = [1, 0, 255] 
    elif(cmd == "RG"):  # remote get
        if(option == "position"):  # get position
            if((data != 0) and (data != 1)):
                return False, []
            param = [17 + data, 0]
        elif(option == "status"):  # get status
            if((data != 0) and (data != 1)):
                return False, []
            param = [113 + data, 1]
        elif(option == "factor"):
            param = [17, 16]
        elif(option == "speed"):
            param = [26, 48]
        else:
            return False, []
    elif(cmd == "RE"):  # remote execute
        if(option == "up"):  # move up
            param = [0, 2, 255]
        elif(option == "down"):  # move down
            param = [0, 1, 255]
        elif(option == "position_A1"):  # go to position stored
            param = [0, 9, 255]
        elif(option == "position_A2"):  # go to position stored
            param = [1, 9, 255]
        else:
            return False, []
    elif(cmd == "RA"):  # remote abort
        param = []
    elif(cmd == "RT"):  # remote transmit
        if(option == "speed"):  # speed
            if(data < 0):
                data = 0
            elif(data > 100):
                data = 100
            param = [4, 0, 26, 48, data % 256, data // 256]

            print("set speed")
        elif(option == "position_A1"):  # position 
            if(data < 0):
                data = 0
            elif(data > 450):
                data = 450
            data = int(data / 0.3)
            param = [6, 0, 33, 48, data % 256, (data // 256) % 256, data // (256 * 256), 0]
        elif(option == "position_A2"):  # position 
            if(data < 0):
                data = 0
            elif(data > 450):
                data = 450
            data = int(data / 0.3)
            param = [6, 0, 34, 48, data % 256, (data // 256) % 256, data // (256 * 256), 0]
    elif(cmd == "RS"):  # reset function
        if(option == "A1"):
            param = [0, 255]
        elif(option == "A2"):
            param = [1, 255]
    else:
        return False, []
    
    return True, param

# Send the request to the SCU
def send_serial(ser, cmd, data):

    ## add 
    send = cmd.encode('ascii')
    
    # Append the data as bytes
    for i in data:
        send += bytes([i])
        
    # Calculate the checksum on the bytes-like object
    crc = crc16.crc16xmodem(send)
    
    # Append the checksum to the send variable
    send += bytes([crc % 256]) + bytes([crc // 256])
    
    # Send the bytes over the serial connection
    print(f'Sending data: {send.hex()}')

    ser.write(send)

# Receive codes from reply and check if there is an error
#No modification
def rcv_codes(ser, cmd):
    # Receive command
    cmd_rcv = ser.read(2)
    print(cmd_rcv, cmd.encode('utf-8'))
    # Assert received the same command
    if(cmd_rcv != cmd.encode('utf-8')):
        print(ser.read(1))
        return False, "Did not receive same command"
    
    # Receive reply parameter
    reply = ser.read()
    
    if(reply == b'\x06'):  # ACK
        return True, "ACK"
    elif(reply == b'\x80'):  # CSE
        return False, "Checksum error"
    elif(reply == b'\x81'):  # PDE
        return False, "Parameter data error"
    elif(reply == b'\x82'):  # PCE
        return False, "Parameter count error"
    elif(reply == b'\x83'):  # ICE
        return False, "Invalid command error"
    elif(reply == b'\x84'):  # PE
        return False, "Permission error"
    
    return False, "Did not receive correct communication error or acknowledge codes"

# Receive requested data if RG command
#No modification
def rcv_data(ser, option):
    
    if(option == "position"):
        data_rcv = ser.read(2)
        if(data_rcv.hex() != '0400'):  # assert we will receive 4 bytes
            print("Wrong reply parameter")
            return False
        data_rcv = ser.read(4)
        data = int(data_rcv[::-1].hex(), 16) * 0.3
        
        
    elif(option == "status"):
        data_rcv = ser.read(2)
        if(data_rcv.hex() != '0100'):  # assert we will receive 1 byte
            print("Wrong reply parameter")
            return False
        data_rcv = ser.read()
        data = int(data_rcv.hex(), 16)
        
    elif(option == "speed"):
        data_rcv = ser.read(2)
        if(data_rcv.hex() != '0200'):  # assert we will receive 4 bytes
            print("Wrong reply parameter")
            return False
        data_rcv = ser.read(2)
        data = int(data_rcv[::-1].hex(), 16)
        
    else:
        return False, "Wrong option"
    
    return True, data

# One exchange (request + reply) with serial   
# Modification : add "try"
def exch_serial(ser, cmd, option='', arg=0):
    global sem
    
    print(f'Thread {threading.current_thread().name} trying to acquire semaphore')
    sem.acquire()
    print(f'Thread {threading.current_thread().name} acquired semaphore')

    try:
        print(f'Getting parameters for cmd: {cmd}, option: {option}, arg: {arg}')
        success, param = get_param(cmd, option, arg)
        if not success:
            print(f'Failed to get parameters for cmd: {cmd}, option: {option}, arg: {arg}')
            return False, "Wrong command send"
        
        print(f'Sending serial command: {cmd} with parameters: {param}')
        send_serial(ser, cmd, param)  
        
        print(f'Receiving response for cmd: {cmd}')
        success, rcv = rcv_codes(ser, cmd)
        if not success:
            print(f'Failed to receive correct response for cmd: {cmd}, received: {rcv}')
            return False, rcv 
        
        data = ""
        if(cmd == "RG"):
            print(f'Receiving data for option: {option}')
            success, data = rcv_data(ser, option)
        
        checksum = ser.read(2)
        print(f'Received checksum: {checksum.hex()}')
        
    finally:
        print(f'Thread {threading.current_thread().name} releasing semaphore')
        sem.release()


    return success, data

# No modification
def init_serial_communication(ser):
    global sem
    sem = threading.Semaphore()
    success, _ = exch_serial(ser, "RO")
    if success:
        print("Remote Mode open")
    else:
        print("Failed to open remote mode")
        exit(1)
        
    
    if exch_serial(ser, "RC"):
        print("Remote cyclic activated")
    else:
        print("Failed to activate remote cyclic")
        exit(1)
