#include <stdio.h>
#include "holberton.h"

/**
 * main - computes & prints the sum of all multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: nothing 279483?
 *
 */
int main(void)
{
	int i, j;
	long int sumfelicia=0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			sumfelicia+=i;
		}

		if ((i % 5) == 0)
		{
			sumfelicia+=i;
		}
	}

	printf("%ld\n",sumfelicia);

	return (0);
}
