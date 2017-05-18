#include "holberton.h"
/**
 * more_numbers - prints 0-14 ten times using only 3 _putchars()
 *
 * Return: none
 */
void more_numbers(void)
{
	int i, j, ones;

	for (j = 1; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			ones = i;
			if (i > 9)
			{
				_putchar('1');
			}
			if (i > 9)
			{
				ones = i % 10;
			}
			if ((i <= 9) || (i > 9))
			{
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
