#include <stdio.h>
/**
 * main - FizzBuzz program for 1 to 100
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i > 0)
			printf(" ");

		if ((i % 3) != 0)
		{
			printf("%d", i);
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			if ((i % 5) == 0)
			{
				printf("Buzz");
			}
		}
	}
	printf("\n");

	return (0);
}
