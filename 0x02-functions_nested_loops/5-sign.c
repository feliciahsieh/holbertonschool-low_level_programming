#include "holberton.h"

/**
 * print_sign - print the sign of a number
 * @n: number to evaluate
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 *
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	} else if (n < 0)
	{
		result = -1;
		_putchar('-');
	} else
	{
		result = 0;
		_putchar('0');
	}

	return (result);
}
