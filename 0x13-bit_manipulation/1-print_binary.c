#include <stdio.h>
#include "holberton.h"
#include <limits.h>
/**
 * print_binary - prints the binary number of argument n
 * @n: value to convert to binary
 * Return: none
 */
void print_binary(unsigned long int n)
{
	int i;
	int places = 0;
	unsigned long int divisor = 2147483648;

	if (n <= 1)
	{
		_putchar(n + '0');
		return;
	}

	while (divisor > n)
	{
		places++;
		divisor = divisor >> 1;
	}

	for (i = 0; i < (32 - places); i++)
	{
		if ((n & divisor) > 0)
			_putchar('1');
		else
			_putchar('0');
		divisor = divisor >> 1;
	}
}
