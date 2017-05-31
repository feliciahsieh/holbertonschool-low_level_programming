#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring. Returns
 * when string s does not contain any substring characters
 * @s: string to check
 * @accept: substring to check
 * Return: number of bytes that contain matched chars
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0, i, j;

	for (i = 0; s[i]; i++)
	{
		if (n != i)
		{
			break;
		}
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
			}
		}
	}

	return (n);
}
