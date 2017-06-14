#include <stdio.h>
/**
 * print_name - print a name
 * @name: name of person
 * @f: function to call with name argument
 * Return: none.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
