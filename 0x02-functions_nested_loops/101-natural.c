#include <stdio.h>
#include "holberton.h"

/**
 * main - computes & prints the sum of all multiples of 3 or 5
 * below 1024 (excluded), followed by a new line.
 *
 * Return: nothing
 *
 */
int main(void)
{
	int i, j, k;
	int index5 = 0;
	int index3 = 0;
	long int sum = 0, sum3 = 0, sum5 = 0;

	int mult5[25] = { 0 }; /* init all elements to 0 */
	int mult3[150] = { 0 }; /* init all elements to 0 */

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			mult3[index3] = i;
			index3++;
			printf("Found multiple:%d for index:%d\n", i, index3);
		}

		if ((i % 5) == 0)
		{
			mult5[index5] = i;
			index5++;
			printf("Found multiple:%d for index:%d\n", i, index5);
		}
	}


	for (j = 0; j < index5; j++)
	{
		sum5 = sum5 + mult5[j];
		printf("m5:%d\n", mult5[j]);
	}

	for (k = 0; k < index3; k++)
	{
		sum3 = sum3 + mult3[k];
		printf("m3:%ld\n", mult3[k]);
	}

	sum = sum3 + sum5;
	printf("The SUM is %ld\n", sum);
}
