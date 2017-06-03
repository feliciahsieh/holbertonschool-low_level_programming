#include <stdio.h>
/**
 * main - prints all arguments received in self
 * @argc: number of arguments sent to main
 * @argv: array of pointers of arguments sent to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
