#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - finds sum of a and b
 * @a: operand1
 * @b: operand2
 * Return: integer sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference of a and b
 * @a: operand1
 * @b: operand2
 * Return: integer difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds product of a and b
 * @a: operand1
 * @b: operand2
 * Return: integer product of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - find division of a by b
 * @a: operand1
 * @b: operand2
 * Return: integer division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - find remainder of division of a by b (modulus)
 * @a: operand1
 * @b: operand2
 * Return: integer remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
