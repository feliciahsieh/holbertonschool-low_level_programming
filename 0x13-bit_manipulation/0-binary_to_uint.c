#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: value to convert
 * Return: unsigned int of argument, b, or
 * 0 if argument is not a binary number or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int x = 0, len = 0;
	unsigned int multiplier = 1;

	if (b == NULL)
		return (result);
	for (len = 0; b[len]; len++)
		if(!((b[len] == '0') || (b[len] == '1')))
			return (result);
	for (x = 0; x < len; x++, multiplier *= 2)
		result += multiplier * (b[len - 1 - x] - '0');

	return (result);
}
