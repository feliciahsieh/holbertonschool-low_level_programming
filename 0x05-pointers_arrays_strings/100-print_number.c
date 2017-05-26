#include "holberton.h"
/**
 * print_number - print number
 * @n: integer to print
 * Return: none
 */
void print_number(int n)
{
	int base;
	int temp;
	int isNegative = 0;
	int divisor = 1;
	int i;
	int target;

	temp = n;
	if (temp < 0)
	{
		temp = -temp;
		n = -n;
		isNegative = 1;
	}
	for (base = 0; temp >= 10; base++)
	{
		temp = temp / 10;
		divisor = divisor * 10;
	}

	if (isNegative)
		_putchar('-');

	for (i = 0; divisor >= 10; i++)
	{
		target = n / divisor;
		_putchar(target + '0');
		n = n - (target * divisor);
		divisor = divisor / 10;
	}
	_putchar(n + '0');
}
