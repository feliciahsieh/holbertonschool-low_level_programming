#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - print and reverse string
 * @s: string to print and reverse
 * Return: none
 */
void rev_string(char *s)
{
	int length = 0, i = 0;

	while (s[i++] != '\0')
		length++;
	printf("l:%d  i:%d\n", length, i);

	for (i = 0; i < length / 2; i++)
	{
		s[length] = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = s[length];
		printf("swapped i:%d with %d",i,length-i-1);
		printf("i:%d  %s\n",i,s);
	}
	printf("Final:%s\n",s);
	s[length] = '\0';
}
