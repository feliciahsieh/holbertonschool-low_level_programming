#include "holberton.h"
/**
 * calcSqrt - find sqrt using recursion
 * @n: find square root of this number
 * @root: possible root of n to test
 * Return: natural square root of n or -1 of none exists
 */
int calcSqrt(int n, int root)
{
	int product = 1;
	int result = -1;

	product = root * root;

	if (product > n)
		result = -1;
	else if (product == n)
		result = root;
	else
		result = calcSqrt(n, root + 1);

	return (result);
}

/**
 * _sqrt_recursion - find natural square root of a number
 * @n: find square root of this number
 * Return: natural square root of n or -1 of none exists
 */
int _sqrt_recursion(int n)
{
	if ((n <= 0) || (n == 2) || (n == 3))
		return (-1);
	else if (n == 1)
		return (1);

	return (calcSqrt(n, 2));
}
