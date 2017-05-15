#include <stdio.h>

int _putchar(char);

/**
 * print_alphabet - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}
