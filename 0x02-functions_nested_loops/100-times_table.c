#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: type of times table to print
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int x, y, xHundreds, xTens, xOnes, result;

	if (!((n > 15) || (n < 0)))
	{
		for (x = 0; x < n + 1; x++)
		{
			for (y = 0; y < n + 1; y++)
			{
				result = x * y;
				xHundreds = result / 100;
				xTens = (result % 100) / 10;
				xOnes = result % 10;

				/* For before the number */
				if ((xHundreds > 0))
					_putchar(xHundreds + '0');
				else
					_putchar(' ');

				if ((xTens >= 0))
					_putchar(xTens + '0');
				else if (y != 0)
					_putchar(' ');

				_putchar(xOnes + '0'); /* Output Ones digit */

				if (y < 15) /* Output proper separator */
				{
					_putchar(',');
				}

				if ((xOnes < 10) && (y < 15))
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
