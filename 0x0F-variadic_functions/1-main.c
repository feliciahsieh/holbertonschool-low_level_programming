#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 0);
	print_numbers(", ", 1, 324);
	print_numbers(NULL, 2, 890, 342);
	print_numbers(", ", 4, 0, 98, -1024, 402);
	return (0);
}
