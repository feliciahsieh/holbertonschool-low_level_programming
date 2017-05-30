#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: chessboard array
 * Return: none
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	_putchar(*(a[0]));

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(a[i] + j));
		}
		_putchar('\n');
	}
}
