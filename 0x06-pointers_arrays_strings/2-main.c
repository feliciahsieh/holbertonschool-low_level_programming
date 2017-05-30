#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');
	printf("final:%s\n\n", f);

	s = "\0";
	f = NULL;
	f = _strchr(s, '\0');
	printf("final:%s\n", f);
	return (0);
}
