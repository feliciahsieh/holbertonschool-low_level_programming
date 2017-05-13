#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, tens, ones, j=1, jtens, jones;

	for (i = 0; i < 100; i++)
	{
		ones = i % 10;
		tens = i / 10;

		if (!((i==0) && (j==1)) && (!((i==98) && (j==100))) )
		{
			putchar(' ');
		}
		for (j = i + 1; j < 100; j++)
		{
			if (!((i==0) && (j==1)))
			{
				putchar(',');
				putchar(' ' );
			}

			if(j==100)
			{
				continue;
			}
			jones = j % 10;
			jtens = j / 10;

			putchar('0' + tens);
			putchar('0' + ones);

			putchar(' ');

			putchar('0' + jtens);
			putchar('0' + jones);
		}
	}

	putchar('\n');

	return (0);
}
