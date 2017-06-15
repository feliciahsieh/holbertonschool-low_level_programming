#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - implement a calculator
 * @argc: count of arguments from user
 * @argv: input string from user
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int operand1 = 0, operand2 = 0, operation = 0, result = 0;

	operand1 = operand1, operand2 = operand2, operation = operation;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operand1 = atoi(argv[1]);
	operand2 = atoi(argv[3]);
	argv[2][1] = '\0';
	operation = argv[2][0];
	switch (operation)
	{
	case '+':
	case '-':
	case '*':
	case '/':
	case '%':
		result = get_op_func(&(argv[2][0]))(operand1, operand2);
		break;
	default:
		printf("Error\n");

		exit(99);
		break;
	}
	printf("%d\n", result);
	return (0);
}
