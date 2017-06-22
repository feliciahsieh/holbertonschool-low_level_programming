#include <stdio.h>
void begin(void) __attribute__((constructor(101)));
/**
 * begin - code run before main function
 * Return: Always 0.
 */
void begin(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my \back!\n");
}
