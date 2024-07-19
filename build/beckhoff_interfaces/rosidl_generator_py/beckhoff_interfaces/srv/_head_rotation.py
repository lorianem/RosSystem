# generated from rosidl_generator_py/resource/_idl.py.em
# with input from beckhoff_interfaces:srv/HeadRotation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HeadRotation_Request(type):
    """Metaclass of message 'HeadRotation_Request'."""

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
                'beckhoff_interfaces.srv.HeadRotation_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__head_rotation__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__head_rotation__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__head_rotation__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__head_rotation__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__head_rotation__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadRotation_Request(metaclass=Metaclass_HeadRotation_Request):
    """Message class 'HeadRotation_Request'."""

    __slots__ = [
        '_deg',
        '_vel',
    ]

    _fields_and_field_types = {
        'deg': 'double',
        'vel': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.deg = kwargs.get('deg', float())
        self.vel = kwargs.get('vel', float())

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
        if self.deg != other.deg:
            return False
        if self.vel != other.vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def deg(self):
        """Message field 'deg'."""
        return self._deg

    @deg.setter
    def deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._deg = value

    @builtins.property
    def vel(self):
        """Message field 'vel'."""
        return self._vel

    @vel.setter
    def vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vel = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_HeadRotation_Response(type):
    """Metaclass of message 'HeadRotation_Response'."""

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
                'beckhoff_interfaces.srv.HeadRotation_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__head_rotation__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__head_rotation__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__head_rotation__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__head_rotation__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__head_rotation__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HeadRotation_Response(metaclass=Metaclass_HeadRotation_Response):
    """Message class 'HeadRotation_Response'."""

    __slots__ = [
        '_feedback',
    ]

    _fields_and_field_types = {
        'feedback': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.feedback = kwargs.get('feedback', str())

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
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'feedback' field must be of type 'str'"
        self._feedback = value


class Metaclass_HeadRotation(type):
    """Metaclass of service 'HeadRotation'."""

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
                'beckhoff_interfaces.srv.HeadRotation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__head_rotation

            from beckhoff_interfaces.srv import _head_rotation
            if _head_rotation.Metaclass_HeadRotation_Request._TYPE_SUPPORT is None:
                _head_rotation.Metaclass_HeadRotation_Request.__import_type_support__()
            if _head_rotation.Metaclass_HeadRotation_Response._TYPE_SUPPORT is None:
                _head_rotation.Metaclass_HeadRotation_Response.__import_type_support__()


class HeadRotation(metaclass=Metaclass_HeadRotation):
    from beckhoff_interfaces.srv._head_rotation import HeadRotation_Request as Request
    from beckhoff_interfaces.srv._head_rotation import HeadRotation_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
