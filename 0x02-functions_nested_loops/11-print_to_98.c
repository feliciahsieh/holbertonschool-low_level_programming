#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints all natural numbers from n to 98 with a newline
 *
 * @n: the starting point for the printing
 *
 * Return: none
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	} else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	} else
	{
		printf("%d\n", n);
	}
}
