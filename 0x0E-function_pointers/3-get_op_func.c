#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the right function to perform asked by the user
 * @s: math operator passed as an argument to the program
 * Return: function pointer that matches to the operator s
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (s)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
