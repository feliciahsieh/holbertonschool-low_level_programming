#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str: string to manipulate
 * Return: none
 */
void puts_half(char *str)
{
	int length = 0, halfPosition = 0;

	while (str[length])
		length++;

	if (length > 0)
	{
		halfPosition = length / 2;

		while (halfPosition <= (length - 1))
		{
			_putchar(str[halfPosition]);
			halfPosition++;
		}
		_putchar('\n');
	}
}
