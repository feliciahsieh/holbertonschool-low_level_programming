#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *sep = NULL;

	print_strings(", ", 2, "Jay", "Django");
	print_strings(", ", 3, "Hello", sep, "Felicia");
	print_strings(sep, 2, "hello", "felicia");
	return (0);
}
