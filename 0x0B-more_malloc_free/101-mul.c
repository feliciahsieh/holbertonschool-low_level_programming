#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "holberton.h"

int main(int argc, char *argv[])
{
	long int a, n1, n2, i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
		if (!isdigit(argv[1][i]))
		{
			printf("Error\n");
			exit(98);
		}

	for (i = 0; argv[2][i]; i++)
		if (!isdigit(argv[2][i]))
		{
			printf("Error\n");
			exit(98);
		}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	a = n1 * n2;

	printf("%ld\n", a);

	return (0);
}
