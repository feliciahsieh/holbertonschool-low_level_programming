#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

#define NIL_STR "(nil)"
/**
 * print_strings - prints strings from a variadic function
 * @separator: string that separates values in variadic function (delimiter)
 * @n: number of arguments in the variadic function
 * @...: variadic arguments
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *myArg = NULL;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (i && (separator != NULL))
			printf("%s", separator);

		myArg = va_arg(ap, char *);
		if (myArg)
			printf("%s", myArg);
		else
			printf(NIL_STR);
	}
	printf("\n");

	va_end(ap);
}
