// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from beckhoff_interfaces:srv/HeadRotation.idl
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
#include "beckhoff_interfaces/srv/detail/head_rotation__struct.h"
#include "beckhoff_interfaces/srv/detail/head_rotation__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beckhoff_interfaces__srv__head_rotation__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[60];
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
    assert(strncmp("beckhoff_interfaces.srv._head_rotation.HeadRotation_Request", full_classname_dest, 59) == 0);
  }
  beckhoff_interfaces__srv__HeadRotation_Request * ros_message = _ros_message;
  {  // deg
    PyObject * field = PyObject_GetAttrString(_pymsg, "deg");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->deg = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beckhoff_interfaces__srv__head_rotation__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeadRotation_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beckhoff_interfaces.srv._head_rotation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeadRotation_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beckhoff_interfaces__srv__HeadRotation_Request * ros_message = (beckhoff_interfaces__srv__HeadRotation_Request *)raw_ros_message;
  {  // deg
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->deg);
    {
      int rc = PyObject_SetAttrString(_pymessage, "deg", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "vel", field);
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
// #include "beckhoff_interfaces/srv/detail/head_rotation__struct.h"
// already included above
// #include "beckhoff_interfaces/srv/detail/head_rotation__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool beckhoff_interfaces__srv__head_rotation__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("beckhoff_interfaces.srv._head_rotation.HeadRotation_Response", full_classname_dest, 60) == 0);
  }
  beckhoff_interfaces__srv__HeadRotation_Response * ros_message = _ros_message;
  {  // feedback
    PyObject * field = PyObject_GetAttrString(_pymsg, "feedback");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->feedback, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * beckhoff_interfaces__srv__head_rotation__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HeadRotation_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("beckhoff_interfaces.srv._head_rotation");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HeadRotation_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  beckhoff_interfaces__srv__HeadRotation_Response * ros_message = (beckhoff_interfaces__srv__HeadRotation_Response *)raw_ros_message;
  {  // feedback
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->feedback.data,
      strlen(ros_message->feedback.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "feedback", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
