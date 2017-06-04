#include "holberton.h"
/**
 * _puts - prints a string, newline to stdout
 * @str: string to print to stdout
 * Return: none
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
