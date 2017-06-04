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
 * main - find minimum of # of coins to make change for an amount of money
 * @argc: number of arguments passed to main
 * @argv: array of pointers of arguments passed to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int c[] = { 25, 10, 5, 2, 1 };
	int cN[4] = { 0 };
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (isNumber(argv[1]))
		{
			if (argv[1][0] == '-')
			{
				printf("0\n");
				return (1);
			}
			else
			{
				amount = atoi(argv[1]);
				cN[0] = amount / c[0];
				amount -= cN[0] * 25;
				cN[1] = amount / c[1];
				amount -= cN[1] * c[1];
				cN[2] = amount / c[2];
				amount -= cN[2] * c[2];
				cN[3] = amount / c[3];
				amount -= cN[3] * c[3];
				cN[4] = amount / c[4];
				amount -= cN[4] * c[4];
/*printf("25:%d 10:%d 5:%d 2:%d 1:%d\n", cN[0], cN[1], cN[2], cN[3], cN[4]);*/
				printf("%d\n", cN[0] + cN[1] + cN[2] + cN[3] + cN[4]);
			}
		}
	}

	return (0);
}
