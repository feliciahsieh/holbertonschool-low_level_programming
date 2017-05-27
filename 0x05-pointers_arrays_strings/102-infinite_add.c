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
	int i, j, k, carryover=0, digit;
	int longerN=0;

/*	printf("n1:%c n2:%c r:%c size:%d\n",*n1,*n2,*r,size_r); */

	size_r = size_r;

	for (i = 0; n1[i] != '\0'; i++)
		;

	for (j = 0; n2[j] != '\0'; j++)
		;

	printf("******i:%d   j:%d\n",i,j);

	/* calc addition */
	longerN = (i > j) ? i-1 : j-1;
	k = longerN+1;
	printf("K:%d\n",k);

	r[k+1] = '\0';
	printf("**k:%d   r[k]:%d\n",k,r[k]);
	while(longerN >= 0)
	{
		digit = (n1[longerN] - '0') + (n2[longerN] - '0') + carryover;

		if (digit>=10)
		{
			digit = digit % 10;
			carryover = 1;
		}
		else
			carryover = 0;

		r[k] = (digit % 10) + '0';
		printf("**k:%d  n1:%c  n2:%c  digit:%d  r[k]:%d\n",k,n1[longerN],n2[longerN],digit,r[k]);

		k--;
		longerN--;
	}
	r[k] = carryover + '0';
	printf("**k:%d  n1:%c  n2:%c  digit:%d  r[k]:%d\n",k,n1[longerN],n2[longerN],digit,r[k]);

	printf("string:%s  r[0]:%c r[1]:%c\n",r,r[0], r[1]);

	return (r);
}
