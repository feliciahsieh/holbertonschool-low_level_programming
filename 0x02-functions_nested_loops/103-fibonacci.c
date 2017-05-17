#include <stdio.h>

/**
 * main - find sum of even fibonacci < 4x10^6
 *
 * Return: zero
 *
 */
int main(void)
{
	long int fib1 = 1, fib2 = 2, new, sum = 2;
	int i;

/*	printf("%ld,\n%ld,\n", fib1, fib2); */
	for (i = 3; i <= 32; i++)
	{
		new = fib1 + fib2;
/*		printf("NEW: %ld", new); */

		if((new%2)==0)
		{
			sum += new;
		}
/*
		if (i < 32)
		{
			printf(",");
			printf(" ");
			printf("%d:\n",i);
		}
*/
		fib1 = fib2;
		fib2 = new;
	}

	printf("%ld\n", sum);

	return (0);
}
