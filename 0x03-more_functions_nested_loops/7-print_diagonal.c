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
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
