#include "holberton.h"

/**
 * times_table - prints the times table up to the  9's
 *
 * Return: nothing
 */
void times_table(void)
{
	int x;
	int y;
	int xTens, xOnes;
	int result;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			result = x * y;
			xTens = result / 10;
			xOnes = result % 10;

			_putchar(xTens);
			_putchar(xOnes);
			_putchar(',');
			_putchar(' ');

			if (xOnes < 10)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
