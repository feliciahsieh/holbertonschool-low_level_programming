#include <stdio.h>
/**
 * main - FizzBuzz program for 1 to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	int is3 = 0, is5 = 0;

	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
			printf(" ");

		if ((i % 3) == 0)
			is3 = 1;
		else
			is3 = 0;

		if ((i % 5) == 0)
			is5 = 1;
		else
			is5 = 0;

		if (is3 == 1)
			printf("Fizz");
		if (is5 == 1)
			printf("Buzz");

		if (!(is3 || is5))
		{
			printf("%d", i);
		}

		/* Reset */
		is3 = 0;
		is5 = 0;
	}
	printf("\n");

	return (0);
}
