#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 * @str: string to adjust
 * Return: none
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (!(i % 2))
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
