#include "holberton.h"
/**
 * print_rev - prints a string in reverse & newline
 * @s: string to print
 * Return: none
 */
void print_rev(char *s)
{
	int i = 0, length = 0;

	while (s[length])
		length++;

	while ((length - i - 1) >= 0)
	{
		_putchar(s[length - i - 1]);
		i++;
	}

	_putchar('\n');
}
