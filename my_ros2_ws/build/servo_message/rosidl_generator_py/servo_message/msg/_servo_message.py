# generated from rosidl_generator_py/resource/_idl.py.em
# with input from servo_message:msg/ServoMessage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServoMessage(type):
    """Metaclass of message 'ServoMessage'."""

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
            module = import_type_support('servo_message')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'servo_message.msg.ServoMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__servo_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__servo_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__servo_message
            cls._TYPE_SUPPORT = module.type_support_msg__msg__servo_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__servo_message

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ServoMessage(metaclass=Metaclass_ServoMessage):
    """Message class 'ServoMessage'."""

    __slots__ = [
        '_servo_number',
        '_servo_value',
    ]

    _fields_and_field_types = {
        'servo_number': 'int32',
        'servo_value': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.servo_number = kwargs.get('servo_number', int())
        self.servo_value = kwargs.get('servo_value', float())

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
        if self.servo_number != other.servo_number:
            return False
        if self.servo_value != other.servo_value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def servo_number(self):
        """Message field 'servo_number'."""
        return self._servo_number

    @servo_number.setter
    def servo_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_number' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'servo_number' field must be an integer in [-2147483648, 2147483647]"
        self._servo_number = value

    @property
    def servo_value(self):
        """Message field 'servo_value'."""
        return self._servo_value

    @servo_value.setter
    def servo_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'servo_value' field must be of type 'float'"
        self._servo_value = value
