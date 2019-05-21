#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * infinite_add - adds 2 numbers
 * @n1: pointer to 1st number to add
 * @n2: pointer to 2nd number to add
 * @r: buffer result of n1+n2
 * @size_r: size of buffer result
 * Return: char pointer to the sum
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carryover=0, digit, longerN=0, lenN1 = 0, lenN2 = 0;
	int i = 0;

	r[0] = '\0';
	for (lenN1 = 0; n1[lenN1] != '\0'; lenN1++)
		;
	for (lenN2 = 0; n2[lenN2] != '\0'; lenN2++)
		;
	if ((lenN1 >= size_r - 1) || (lenN2 >= size_r - 1))
		return (0);

	if (lenN1 > lenN2)
		longerN = lenN1;
	else
		longerN = lenN2;

	lenN1--;
	lenN2--;
	for (i = longerN; i > 0; i--)
	{
		digit = 0;
		if (lenN1 >= 0)
			digit = n1[lenN1] - '0';
		if (lenN2 >= 0)
			digit = digit + n2[lenN2] - '0';
		digit = digit + carryover;
		if (digit >= 10)
		{
			digit = digit % 10;
			carryover = 1;
		}
		else
			carryover = 0;
		r[i] = digit + '0';
		lenN1--;
		lenN2--;
	}
	if (carryover == 1)
		r[0] = carryover + '0';
	r[longerN + 1] = '\0';

	return (r);
}
