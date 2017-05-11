#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		if ((i != 4) && (i != 16)) /* Don't print 'e' nor 'q' */
		{
			putchar('a' + i);
		}
	}

	putchar('\n');

	return (0);
}
