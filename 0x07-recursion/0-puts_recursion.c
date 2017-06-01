#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to print
 * Return: none
 */
void printC(char c)
{
	_putchar(c);
}

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		printC('\n');
		return;
	}
	else
	{
		printC(s[0]);
		_puts_recursion(s + 1);
	}
}
