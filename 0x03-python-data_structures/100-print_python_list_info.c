#include <stdio.h>
#include <stdlib.h>
#include <Python.h>

/**
 * print_python_list_info - prints info about a python list
 * @p: Python Object
 */
void print_python_list_info(PyObject *p)
{
ssize_t size, i = 0;
PyListObject *list;
PyObject *item;

size = Py_SIZE(p);
printf("[*] Size of the Python List = %ld\n", size);

list = (PyListObject *)p;
printf("[*] Allocated = %ld\n", list->allocated);

for ( ; i < size; i++)
{
item = PyList_GetItem(p, i);
printf("Element %ld: %s\n", i, Py_TYPE(item)->tp_name);
}
}
