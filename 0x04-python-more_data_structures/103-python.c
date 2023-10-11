#include <Python.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_pylist - prints a python list
 * @p: some python object 
*/
void print_pylist(PyObject *p)
{
    if (PyList_Check(p)) {
        Py_ssize_t size = PyList_Size(p);
        Py_ssize_t i;

        printf("[*] Python list info\n");
        printf("[*] Size of the Python List = %ld\n", size);
        printf("[*] Allocated = %ld\n", ((PyListObject *)p)->allocated);

        for (i = 0; i < size; i++) {
            PyObject *item = PyList_GetItem(p, i);
            const char *typeName = Py_TYPE(item)->tp_name;
            printf("Element %ld: %s\n", i, typeName);
        }
    } else {
        PyErr_SetString(PyExc_TypeError, "object is not a list");
    }
}

/**
 * print_pybytes - prints python bytes
*/
void print_pybytes(PyObject *p) {
    if (PyBytes_Check(p)) {
        Py_ssize_t size = PyBytes_Size(p);
        Py_ssize_t i;
        char *str = PyBytes_AsString(p);

        printf("[.] bytes object info\n");
        printf("  size: %ld\n", size);
        printf("  trying string: %s\n", str);

        if (size > 10) {
            size = 10;
        }

        printf("  first %ld bytes: ", size);
        for (i = 0; i < size; i++) {
            printf("%02x", str[i] & 0xff);
            if (i < size - 1) {
                printf(" ");
            }
        }
        printf("\n");
    } else {
        PyErr_SetString(PyExc_TypeError, "object is not a bytes object");
    }
}
