#include "holberton.h"

int _isupper(int c)
{
	int result;

	if ((c >= 'A') && (c <='Z'))
	{
		result = 1;
	} else
	{
		result = 0;
	}

	return (result);
}
