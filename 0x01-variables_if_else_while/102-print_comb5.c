#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int tens = 0;
	int ones = 0;
	int j = 0;
	int jtens = 0;
	int jones =0;

	for(i=0;i<100;i++)
	{
		ones = i % 10;
		tens = i / 10;
		if(tens==0)
		{
			putchar('0');
			putchar('0');
		} else
		{
			putchar('0'+tens);
			putchar('0'+ones);
		}

		if((i*tens + ones) < 900)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
