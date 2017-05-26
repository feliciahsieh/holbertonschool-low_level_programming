#include "holberton.h"
/**
 * print_number - print number
 * @n: integer to print
 * Return: none
 */
void print_number(int n)
{
	int temp;
	int isNegative = 1;
	int divisor = 1;
	int i;
	int target;

	if (n >= 0)
	{
		n = -n;
		isNegative = 0;
	}
	temp = n;

	while (temp <= -10)
	{
		temp = temp / 10;
		divisor = divisor * 10;
	}

	if (isNegative)
		_putchar('-');

	for (i = 0; divisor >= 10; i++)
	{
		target = n / divisor;
		_putchar((target * -1) + '0');
		n = n % divisor;
		divisor = divisor / 10;
	}
	_putchar(-1 * n + '0');
}
