#include <stdio.h>
#include "holberton.h"
#define UL_MAXPOW2 2147483648
#define ERRORCODE_B -1
/**
 * get_bit - returns the base 2 bit index value from a base 10 number
 * @n: base 10 number to evaluate
 * @index: index value to return from base 2 number
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int divisor = UL_MAXPOW2;
	int i;
	unsigned int powNum = 31;
	unsigned int binary[32] = { 0 };

	if (index > 31)
		return (ERRORCODE_B);

	for (i = 0; i < 32; i++)
	{
		if (divisor > n)
			binary[i] = 0;
		else
		{
			binary[i] = 1;
			n = n - divisor;
		}

		divisor = divisor >> 1;
		powNum--;
	}

	return (binary[31 - index]);
}
