#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string to manipulate
 * Return: none
 */
void puts_half(char *str)
{
	int length = 0, halfPosition = 0, i = 0;

	while (str[length])
		length++;

	if (length >= 0)
	{
		halfPosition = length / 2;

		i = length - halfPosition;
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
}
