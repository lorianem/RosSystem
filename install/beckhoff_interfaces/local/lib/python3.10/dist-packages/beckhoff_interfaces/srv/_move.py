# generated from rosidl_generator_py/resource/_idl.py.em
# with input from beckhoff_interfaces:srv/Move.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Move_Request(type):
    """Metaclass of message 'Move_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beckhoff_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beckhoff_interfaces.srv.Move_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_Request(metaclass=Metaclass_Move_Request):
    """Message class 'Move_Request'."""

    __slots__ = [
        '_x',
        '_y',
        '_r',
        '_velocity',
    ]

    _fields_and_field_types = {
        'x': 'double',
        'y': 'double',
        'r': 'double',
        'velocity': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.r = kwargs.get('r', float())
        self.velocity = kwargs.get('velocity', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.r != other.r:
            return False
        if self.velocity != other.velocity:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def r(self):
        """Message field 'r'."""
        return self._r

    @r.setter
    def r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._r = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_Move_Response(type):
    """Metaclass of message 'Move_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beckhoff_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beckhoff_interfaces.srv.Move_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__move__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__move__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__move__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__move__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__move__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Move_Response(metaclass=Metaclass_Move_Response):
    """Message class 'Move_Response'."""

    __slots__ = [
        '_err',
        '_val_x',
        '_val_y',
        '_val_r',
    ]

    _fields_and_field_types = {
        'err': 'string',
        'val_x': 'double',
        'val_y': 'double',
        'val_r': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.err = kwargs.get('err', str())
        self.val_x = kwargs.get('val_x', float())
        self.val_y = kwargs.get('val_y', float())
        self.val_r = kwargs.get('val_r', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.err != other.err:
            return False
        if self.val_x != other.val_x:
            return False
        if self.val_y != other.val_y:
            return False
        if self.val_r != other.val_r:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def err(self):
        """Message field 'err'."""
        return self._err

    @err.setter
    def err(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'err' field must be of type 'str'"
        self._err = value

    @builtins.property
    def val_x(self):
        """Message field 'val_x'."""
        return self._val_x

    @val_x.setter
    def val_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'val_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'val_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._val_x = value

    @builtins.property
    def val_y(self):
        """Message field 'val_y'."""
        return self._val_y

    @val_y.setter
    def val_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'val_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'val_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._val_y = value

    @builtins.property
    def val_r(self):
        """Message field 'val_r'."""
        return self._val_r

    @val_r.setter
    def val_r(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'val_r' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'val_r' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._val_r = value


class Metaclass_Move(type):
    """Metaclass of service 'Move'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('beckhoff_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'beckhoff_interfaces.srv.Move')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__move

            from beckhoff_interfaces.srv import _move
            if _move.Metaclass_Move_Request._TYPE_SUPPORT is None:
                _move.Metaclass_Move_Request.__import_type_support__()
            if _move.Metaclass_Move_Response._TYPE_SUPPORT is None:
                _move.Metaclass_Move_Response.__import_type_support__()


class Move(metaclass=Metaclass_Move):
    from beckhoff_interfaces.srv._move import Move_Request as Request
    from beckhoff_interfaces.srv._move import Move_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
