#include "holberton.h"
/**
 * _atoi - convert a string to integer
 * @s: string to convert
 * Return: integer version of string
 */
int _atoi(char *s)
{
	int target, len, nMinus, runOnce;

	target = len = nMinus = runOnce = 0;

	while (s[len] != '\0')
	{
		if (s[len] == '-')
			nMinus = ~nMinus;
		if ((s[len] >= '0') && (s[len] <= '9'))
			break;

		len++;
	}

	while ((s[len] >= '0') && (s[len] <= '9') && (s[len] != '\0'))
	{
		if (runOnce == 0)
		{
			target = (s[len] - '0') * (-1);
			runOnce = 888;
		}
		else
		{
			target = (10 * target) - (s[len] - '0');
		}
		len++;
	}

	if (nMinus == 0)
		target = -target;

	return (target);
}
