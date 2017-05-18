#include "holberton.h"
/**
 * print_triangle - print a triangle with # character
 *
 * @size: size of the triangle
 *
 * Return: none
 */
void print_triangle(int size)
{
	int i, j, k;
	int myChars = 0;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		for (i = 0; i < size ; i++)
		{
			myChars = i + 1;
			/* print spaces */
			for (j = 0 ; j < size - myChars; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < myChars; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
