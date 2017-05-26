#include "holberton.h"
/**
 * rot13 - encode a string into rot13
 * @s: input string to encode
 * Return: rot13 string
 */
char *rot13(char *s)
{
	int i, j;
	char *enc, *dec;

	enc = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	dec = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; enc[j]; j++)
		{
			if (s[i] == enc[j])
			{
				s[i] = dec[j];
				break;
			}
		}
	}
	return (s);
}
