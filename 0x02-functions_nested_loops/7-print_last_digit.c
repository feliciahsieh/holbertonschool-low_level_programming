#include "holberton.h"

/**
 * print_last_digit - finds the last digit of a number
 * @n: number to evaluate
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int result;

	if (n >= 0)
	{
		result = n % 10;
	} else
	{
		result = -(n % 10);
	}

	_putchar('0' + result);
	return (result);
}
