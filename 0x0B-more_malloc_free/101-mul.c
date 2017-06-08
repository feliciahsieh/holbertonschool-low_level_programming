#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

int main(int argc, char *argv[])
{
	long long int a, n1, n2;

	argc = argc;
	printf("%s %s %s\n",argv[0], argv[1], argv[2]);

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	a = n1 * n2;

	printf("%lld\n", a);

	return (0);
}
