#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

#define NIL_STR "(nil)"

/**
 * pr_char - prints characters
 * @a: adsf
 * Return: none
*/
void pr_char(int n, char a)
{
	printf("%c", a);
}
/**
 * pr_int - prints integer
 * @a: asd
 * Return: none
 */
void pr_int(int n, int a)
{
	printf("%d", a);
}

/**
 * pr_float - prints float
 * @a:asf
 * Return: none
 */
void pr_float(int n, float a)
{
	printf("%f", a);
}

/**
 * pr_string - prints string
 * @a: sdsf
 * Return: none
 */
void pr_string(int n, char *a)
{
	printf("%s", a);
}

/**
 * print_all - prints arguments of any data type
 * @format: format of the arguments (c:char, i:int, f:float, s:char*)
 * @...: variadic arguments
 * Return: none
 */
void print_all(const char * const format, ...)
{ /* 2 while loops, 2 if, 9 var */
	myPrint_t pp[5] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string},
		{NULL, NULL}
	};

	va_list ap;
	unsigned int i = 0;
	size_t len = 0;
	char *value;

	va_start(ap, format);

	i = 0;
	while (i < len)
	{
		value = va_arg(ap, char *);
		printf("%d:\n", i);
		i++;
	}

	va_end(ap);

	printf("\n");
}
