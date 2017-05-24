#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char myPassword[8] = "hello";
	int result;
	char s[74] = "abcdefghijklmnopqrstuvwxyz01234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()?";
/*	int passLength = 8; */
	int i = 0;

	myPassword[0] = '\n';

	srand(time(NULL));

	printf("s:%s\n", s);
	while (i<8)
	{
		result = rand() % 74;
/*		myPassword[i] = s[result]; */
		printf("r:%d  s:%c\n", result, s[result]);
		myPassword[i] = s[result];
		i++;
	}

/*	printf("%s\n", myPassword); */
}
