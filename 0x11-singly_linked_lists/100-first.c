#include <stdio.h>
void begin(void) __attribute__((constructor(101)));
/**
 * begin - print text before main function runs
 * Return: none
 */
void begin(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
