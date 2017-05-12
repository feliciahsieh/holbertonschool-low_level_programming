#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int tens;
	int ones;
	int j;
	int jtens;
	int jones;

	for(i=0;i<100;i++)
	{
		ones = i % 10;
		tens = i / 10;

		for(j=i+1;j<100;j++)
		{
			printf("%d ",i);
			printf("%d",j);

			if(i<98 && j<99)
			{
				printf(", ");
			}
		}

		if((i<=97) && (j<=100))
		{
			printf(",");
		}
	}

	putchar('\n');

	return (0);
}
