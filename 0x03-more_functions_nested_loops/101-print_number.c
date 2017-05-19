#include "holberton.h"
int power(int base, int pwr);
/**
 * print_number - prints an integer
 *
 * @n:  number to print one char at a time
 *
 * Return: none
 */
void print_number(int n)
{
	int i;
	int isNegative = 0;
	int myNum;
	int places = 0;
	int myDigit;
	int highestTen;

	/* Range of int -32,768 to 32,767 (5 places) or
	   -2,147,483,648 to 2,147,483,647 (10 places) */

	if (n != 0)
	{
		myNum = n;
		if (n < 0)
		{
			isNegative = 1;
			myNum = -myNum;
		}
		while(myNum>0)
		{
			myNum = myNum / 10;
			places++;
		}

		/* print it out */
		if (isNegative)
		{
			_putchar('-');
		}

		myNum = n;
		if (n < 0)
		{
			myNum = -myNum;
		}

		highestTen = power(10, places);
		for (i = 0; i < (places); i++)
		{
			if (i<(places-1))
			{
				myDigit = myNum / highestTen;
				_putchar(myDigit + '0');
				myNum = myNum - (myDigit * highestTen);
				highestTen = highestTen / 10;
			} else
			{
				_putchar(myNum + '0');
			}
		}
	} else
	{
		_putchar('0');
	}
}

int power(int base, int powr)
{
	int i;
	int value = 1;

	/* Higher than 10 causes problem */
	if(powr < 10)
	{
		for (i = 0; i < (powr-1); i++)
		{
			value = value * base;
		}
		return (value);
	}
}
