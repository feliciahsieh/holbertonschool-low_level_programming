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
	int carryover = 0, digit, longN, l1, l2, i, j, temp;

	for (i = 0; i < size_r; i++)
		r[i] = '\0';
	for (l1 = 0; n1[l1] != '\0'; l1++)
		;
	for (l2 = 0; n2[l2] != '\0'; l2++)
		;
	if ((l1 > size_r - 2) || (l2 > size_r - 2))
		return (0);
	longN = (l1 > l2) ? l1 : l2;
	for (i = 0, l1--, l2--; i < longN; i++, l1--, l2--, digit = 0)
	{
		if (l1 >= 0)
			digit = n1[l1] - '0';
		if (l2 >= 0)
			digit = digit + n2[l2] - '0';
		digit += carryover;
		if (digit >= 10)
		{
			digit = digit % 10;
			carryover = 1;
		}
		else
			carryover = 0;
		r[i] = digit + '0';
	}
	if (carryover == 1)
		r[i] = carryover + '0';
	else
		i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = r[j];
		r[j] = r[i];
		r[i] = temp;
	}
	r[size_r - 1] = '\0';
	return (r);
}
