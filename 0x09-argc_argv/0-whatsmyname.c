#include <stdio.h>
/**
 * main - prints its filename, followed by a new line.
 * If file is renamed, it will print the new name, without a recompile.
 * Do not remove the path before the name of the program
 * @argc: number of arguments sent to main
 * @argv: array of pointers sent to main
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	argc = argc;
	printf("%s\n", argv[0]);
	return (0);
}
