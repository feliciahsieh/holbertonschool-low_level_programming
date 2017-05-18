#include "holberton.h"
/**
 * print_diagonal - draw diagonal line on terminal
 *
 * @n: number of "\" characters to print
 *
 * Return: none
 */
void print_diagonal(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < (n - 1); j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
}
