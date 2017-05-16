#include "holberton.h"

/**
 * jack_bauer - prints every min of Jack Bauer's day, from 00:00 to 23:59.
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int min, hour;
	int hTens, hOnes;
	int mTens, mOnes;

	for (hour = 0; hour < 24; hour++)
	{
		hTens = hour / 10;
		hOnes = hour % 10;

		for (min = 0; min < 60; min++)
		{
			mTens = min / 10;
			mOnes = min % 10;

			_putchar(hTens + '0');
			_putchar(hOnes + '0');
			_putchar(':');
			_putchar(mTens + '0');
			_putchar(mOnes + '0');
			_putchar('\n');
		}
	}
}
