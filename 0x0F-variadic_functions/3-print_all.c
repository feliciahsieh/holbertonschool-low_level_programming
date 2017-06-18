#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

#define NIL_STR "(nil)"

/**
 * pr_char - prints characters
 * @v: variatic list
 * Return: none
*/
void pr_char(va_list v)
{
	printf("%c", va_arg(v, int));
}

/**
 * pr_int - prints integer
 * @v: variatic list
 * Return: none
 */
void pr_int(va_list v)
{
	printf("%d", va_arg(v, int));
}

/**
 * pr_float - prints float
 * @v: variatic list
 * Return: none
 */
void pr_float(va_list v)
{
	printf("%f", va_arg(v, double));
}

/**
 * pr_string - prints string
 * @v: variatic list
 * Return: none
 */
void pr_string(va_list v)
{
	char *str;

	str = va_arg(v, char *);
	if (!printf("%s", str))
		printf(NIL_STR);
}

/**
 * print_all - prints arguments of any data type
 * @format: format of the arguments (c:char, i:int, f:float, s:char*)
 * @...: variadic arguments
 * Return: none
 */
void print_all(const char * const format, ...)
{
	myPrint_t p[5] = {
		{'c', pr_char},
		{'i', pr_int},
		{'f', pr_float},
		{'s', pr_string},
		{'\0', NULL}
	};

	va_list ap;
	unsigned int i = 0, j = 0;
	char *separatorStr;

	separatorStr = "";

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (p[j].prType)
		{
			/*printf("j:%d  format:%c  p[j].prType:%c\n", j, format[i], p[j].prType)*/;
			if (format[i] == p[j].prType)
			{
				/*printf("Matched:%c\n", format[i]);*/
				printf("%s", separatorStr);
				separatorStr = ", ";
				p[j].f(ap);
				j = -1;
				break;
			}
			j++;
		}
		i++;
	}

	va_end(ap);

	printf("\n");
}
