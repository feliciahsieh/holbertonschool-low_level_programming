#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 or 5 < 1024
 *
 * Return: zero
 *
 */
int main(void)
{
	int i;
	long int sumfelicia = 0;

	for (i = 1; i < 1024; i++)
	{
		if (!(i % 3) || (!(i % 5)))
		{
			sumfelicia += i;
		}
	}

	printf("%ld\n", sumfelicia);

	return (0);
}
