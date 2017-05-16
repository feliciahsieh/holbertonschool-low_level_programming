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

			/* For before the number */
			if ((xTens > 0))
			{
				_putchar(xTens + '0');
			} else if (y != 0)
			{
				_putchar(' ');
			}


			/* Output Ones digit */
			_putchar(xOnes + '0');

			/* Output proper separator */
			if (y < 9)
			{
				_putchar(',');
			}

			if ((xOnes < 10) && (y < 9))
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
