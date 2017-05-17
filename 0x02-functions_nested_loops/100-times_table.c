#include "holberton.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: type of times table to print
 * Return: nothing
 */
void print_times_table(int n)
{
	int x, y, xHundreds, xTens, xOnes, res;

	if (!((n > 15) || (n < 0)))
	{
		for (x = 0; x < n + 1; x++)
		{
			for (y = 0; y < n + 1; y++)
			{
				res = x * y; xHundreds = res / 100;
				xTens = (res % 100) / 10; xOnes = res % 10;
				if ((xHundreds > 0)) /* Before Number */
					_putchar(xHundreds + '0');
				else if (y != 0)
					_putchar(' ');
				if ((xTens > 0) && (y != 0))
					_putchar(xTens + '0');
				else if ((xTens == 0) && (res > 100))
					_putchar('0');
				else if (y != 0)
					_putchar(' ');
				_putchar(xOnes + '0'); /* Output Ones digit */
				if ((y < 15) && (y < n)) /* Output separator */
					_putchar(',');
				if ((xOnes < 10) && (y < 15) && (y < n))
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
