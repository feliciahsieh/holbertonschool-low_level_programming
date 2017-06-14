#ifndef FN_PTR
#define FN_PTR
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - printaname
 * @name: sks
 * @f: djf
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
#endif
