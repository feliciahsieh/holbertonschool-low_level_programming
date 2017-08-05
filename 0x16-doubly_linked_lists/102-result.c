#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int product, i, j;
	int d1, d2, d3, d4, d5;
	FILE *fp;

	fp = fopen("102-result", "w+");

	for (i = 999; i > 998; i--)
	{
		for (j = 999; j > 0; j--)
		{
			product = i * j;
			printf("%i * %i = %i\n", i, j, product);

			d5 = product / 100000;
			d4 = product / 10000;
			d3 = product / 1000;
			d2 = product / 100;
			d1 = product % 10;

			printf("%d %d %d %d\n", d4, d3, d2, d1);
			break;
		}
	}
	/*switch to write()*/
	fprintf(fp,"%s\n", "Hello");

	fclose(fp);
}
