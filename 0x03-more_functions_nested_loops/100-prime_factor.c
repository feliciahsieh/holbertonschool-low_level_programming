#include <stdio.h>
#include "holberton.h"
/**
 * main - print largest prime number
 *
 * Return: none
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int div;

	printf("%lu", n);
	printf("\n");

	div = 2;
	while (div < n)
	{
		if ((n % div == 0) && (n / div) > 1)
		{
			n = n / div;
			div = 2;
		} else
		{
			div = div + 1;
		}
	}
	printf("%lu\n", n);

	return (0);
}
