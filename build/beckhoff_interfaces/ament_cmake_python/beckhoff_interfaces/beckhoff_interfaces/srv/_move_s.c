// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from beckhoff_interfaces:srv/Move.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "beckhoff_interfaces/srv/detail/move__struct.h"
#include "beckhoff_interfaces/srv/detail/move__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beckhoff_interfaces__srv__move__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("beckhoff_interfaces.srv._move.Move_Request", full_classname_dest, 42) == 0);
  }
  beckhoff_interfaces__srv__Move_Request * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // r
    PyObject * field = PyObject_GetAttrString(_pymsg, "r");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->r = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // velocity
    PyObject * field = PyObject_GetAttrString(_pymsg, "velocity");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->velocity = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beckhoff_interfaces__srv__move__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Move_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beckhoff_interfaces.srv._move");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Move_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beckhoff_interfaces__srv__Move_Request * ros_message = (beckhoff_interfaces__srv__Move_Request *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // r
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // velocity
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->velocity);
    {
      int rc = PyObject_SetAttrString(_pymessage, "velocity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/move__struct.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/move__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beckhoff_interfaces__srv__move__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("beckhoff_interfaces.srv._move.Move_Response", full_classname_dest, 43) == 0);
  }
  beckhoff_interfaces__srv__Move_Response * ros_message = _ros_message;
  {  // err
    PyObject * field = PyObject_GetAttrString(_pymsg, "err");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->err, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // val_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "val_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->val_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // val_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "val_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->val_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // val_r
    PyObject * field = PyObject_GetAttrString(_pymsg, "val_r");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->val_r = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beckhoff_interfaces__srv__move__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Move_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beckhoff_interfaces.srv._move");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Move_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beckhoff_interfaces__srv__Move_Response * ros_message = (beckhoff_interfaces__srv__Move_Response *)raw_ros_message;
  {  // err
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->err.data,
      strlen(ros_message->err.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "err", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // val_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->val_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "val_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // val_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->val_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "val_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // val_r
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->val_r);
    {
      int rc = PyObject_SetAttrString(_pymessage, "val_r", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
