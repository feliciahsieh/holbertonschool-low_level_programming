#include <stdio.h>
#include <limits.h>
#include "holberton.h"
/**
 * print_binary - prints the binary number of argument n
 * @n: value to convert to binary
 * Return: none
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 2147483648;
	unsigned long int i;
	int isHighDigit = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	mask = ~0;
	mask = mask >> 1;
	mask = ~mask;

	for (i = 0; i < (8 * (sizeof(unsigned long int))); i++)
	{
		if ((n & mask) > 0)
		{
			_putchar('1');
			isHighDigit = 1;
		}
		else if (isHighDigit)
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}

}
