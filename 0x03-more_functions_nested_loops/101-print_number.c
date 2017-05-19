#include "holberton.h"
/**
 * print_number - prints an integer
 * @n:  number to print one char at a time
 * Return: none
 */
void print_number(int n)
{
	int i, q, n1, myn2, places = 0, value = 1, myDigit, hi10;

	if (n != 0)
	{
		n1 = n, myn2 = n;
		if (myn2 < 0)
			myn2 = -myn2;
		while (myn2 > 0)
		{
			myn2 = myn2 / 10;
			places++;
		}
		if (n < 0)
		{
			_putchar('-'), n1 = -n1;
		}
		for (q = 0; q < (places - 1); q++)
			value = value * 10;
		hi10 = value;
		for (i = 0; i < (places); i++)
		{
			if (i < (places - 1))
			{
				myDigit = myNum / hi10, _putchar(myDigit + '0');
				n1 = n1 - (myDigit * hi10), hi10 = hi10 / 10;
			} else
				_putchar(n1 + '0');
		}
	} else
		_putchar('0');
}
