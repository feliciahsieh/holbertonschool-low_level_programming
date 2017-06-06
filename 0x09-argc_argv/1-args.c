#include <stdio.h>
/**
 * main - print of number of arguments sent to self
 * @argc: number of arguments sent to main
 * @argv: array of pointers sent to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	argv = argv;
	printf("%d\n", argc - 1);
	return (0);
}
