#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all variable number of parameters
 * @n: number of elements in list
 * @...: list of numbers to add
 * Return: sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;

	va_list ap;

	result = 0;
	if (n != 0)
	{
		va_start(ap, n);

		for (i = 0; i < n; i++)
			result += va_arg(ap, int);

		va_end(ap);
	}
	return (result);
}
