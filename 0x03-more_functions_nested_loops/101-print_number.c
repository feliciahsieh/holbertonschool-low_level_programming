#include "holberton.h"
/**
 * print_number - prints an integer
 * @n:  number to print one char at a time
 * Return: none
 */
void print_number(int n)
{
	int i, q, myNum, myn2, places = 0, value = 1, myDigit, highestTen;

	if (n != 0)
	{
		myNum = n, myn2 = n;
		if (myn2 < 0)
			myn2 = -myn2;

		while (myn2 > 0)
		{
			myn2 = myn2 / 10;
			places++;
		}

		if (n < 0)
			_putchar('-');

		myNum = n;
		if (n < 0)
			myNum = -myNum;

		for (q = 0; q < (places - 1); q++)
			value = value * 10;

		highestTen = value;
		for (i = 0; i < (places); i++)
		{
			if (i < (places - 1))
			{
				myDigit = myNum / highestTen;
				_putchar(myDigit + '0');
				myNum = myNum - (myDigit * highestTen);
				highestTen = highestTen / 10;
			} else
				_putchar(myNum + '0');
		}
	} else
		_putchar('0');
}
