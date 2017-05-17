#include <stdio.h>

/**
 * main - find sum of even fibonacci < 4x10^6
 *
 * Return: 0
 *
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, new, sum = 2;
	int i;

	for (i = 3; i <= 32; i++)
	{
		new = fib1 + fib2;

		if ((new % 2) == 0)
		{
			sum += new;
		}

		fib1 = fib2;
		fib2 = new;
	}

	printf("%ld\n", sum);

	return (0);
}
