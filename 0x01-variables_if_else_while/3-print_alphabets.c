#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	char mySet[] = {'a', 'A'};

	for (j = 0; j < 2; j++)
	{
		for (i = 0; i < 26; i++)
		{
			putchar(mySet[j] + i);
		}
	}

	putchar('\n');

	return (0);
}
