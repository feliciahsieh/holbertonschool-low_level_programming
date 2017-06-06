#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints product of 2 numbers sent to self
 * Print Error and "1" if 2 arguments not received by main
 * @argc: number of arguments sent to main
 * @argv: array of pointers of arguments sent to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	} else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
