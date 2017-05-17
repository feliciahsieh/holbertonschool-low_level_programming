#include "holberton.h"

/**
 * main - find 1st 98 Fibonacci numbers
 *
 * Return: zero
 *
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, new;
	int i;

	_putchar('1');
	_putchar(',');
	_putchar(' ');
	_putchar('2');
	for (i = 3; i <= 98; i++)
	{
		new = fib1 + fib2;

		if (i < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		fib1 = fib2;
		fib2 = new;
	}
	_putchar('\n');

	return (0);
}
