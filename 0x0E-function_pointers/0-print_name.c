#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: string name to print
 * @f: function to use to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
	else
		exit(98);
}
