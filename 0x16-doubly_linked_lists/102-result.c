#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int product, i, j;
	FILE *fp;

	fp = fopen("102-result", "w+");

	for (i = 999; i > 0; i--)
		for (j = 999; j > 0; j--)
		{
			product = i * j;
			printf("%i * %i = %i\n", i, j, product);
		}

	/*switch to write()*/
	fprintf(fp,"%s\n", "Hello");

	fclose(fp);
}
