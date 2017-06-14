#include <stdio.h>
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
