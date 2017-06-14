#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: string name to print
 * @f: function to use to print
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
