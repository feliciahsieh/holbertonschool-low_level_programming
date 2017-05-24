#include "holberton.h"
#include <stdio.h>
/**
 * atoi - convert a string to integer
 * @s: string to convert
 * Return: integer version of string
 */
int _atoi(char *s)
{
	int target = 0;
	int len = 0;
	int nMinus = 0;
	int digitsExist = 0;
	int posFirstNumber = 32767;
	int base = 1;
	int digit = 0;
	int i = 0;
	int j = 0;
	int foundNumber = 0;
	char myNum[10];

	printf("s:%s\n", s);

	while (s[len])
	{
		if (s[len] == '-')
			nMinus++;
		if ((s[len] >= '0') && (s[len] <= '9') && !foundNumber)
		{
			digitsExist++;
			foundNumber = 1;

			while (s[len])
			{
				myNum[j] = s[len];
				len++;
				j++;
				base = base * 10;
			}
			printf("myNum:%s\n", myNum);
		}
		len++;
	}

	base = base / 10;
	printf("Before base:%d\n",base);
	for (i=0; myNum[i]; i++)
	{
		target = (myNum[i] - '0') * base + target;
		printf("target:%d\n",target);
		base = base / 10;
	}


	if (!(nMinus % 2))
		target = -target;

	return (target);
}
