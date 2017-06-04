#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isNumber - check if number is an integer
 * @number: value to check if it is an integer
 * Return: 1 if number is integer or 0 if not
 */
int isNumber(char number[])
{
	int i = 0;

	/* checking for negative numbers */
	if (number[0] == '-')
		i = 1;
	for (; number[i] != 0; i++)
	{
		/* if (number[i] > '9' || number[i] < '0') */
		if (!isdigit(number[i]))
			return (0);
	}
	return (1);
}
/**
 * main - kdjfsldkfjsd
 * @argc: number of arguments passed to main
 * @argv: array of pointers passed to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 1, result = 0, add1;

	if (argc < 1)
	{
		printf("0\n");
	} else
	{
		while (i < argc)
		{
			if (isNumber(argv[i]))
			{
				add1 = atoi(argv[i]);
				result += add1;
			}
			else
			{
				printf("Error\n");
				break;
			}
			i++;
		}
		if (i == argc)
			printf("%d\n", result);
	}
	return (0);
}
