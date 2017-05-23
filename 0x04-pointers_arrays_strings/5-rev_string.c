#include "holberton.h"
/**
 * rev_string - print and reverse string
 * @s: string to print and reverse
 * Return: none
 */
void rev_string(char *s)
{
	int i = 0, length = 0;
	char *temp;

	while (s[length])
	{
		length++;
	}
	_putchar('\n');

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}
	_putchar('\n');

}
