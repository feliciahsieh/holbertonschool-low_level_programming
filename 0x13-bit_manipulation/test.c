#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp = fopen("101-password", "w");
	char a[4] = {'A', 'B', 'C', '\4'};

	if (!fp)
	{
		perror("File open failed");
		return (EXIT_FAILURE);
	}

	fwrite(a, sizeof a[0], 4, fp);

	fclose(fp);
}
