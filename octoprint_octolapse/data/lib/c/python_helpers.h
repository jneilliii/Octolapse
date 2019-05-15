#pragma once
#ifdef _DEBUG
#undef _DEBUG
#include <Python.h>
#define _DEBUG
#else
#include <Python.h>
#endif
#include <string>
int PyUnicode_SafeCheck(PyObject * py);
const char* PyUnicode_SafeAsString(PyObject * py);
PyObject * PyString_SafeFromString(const char * str);
PyObject * PyUnicode_SafeFromString(std::string str);