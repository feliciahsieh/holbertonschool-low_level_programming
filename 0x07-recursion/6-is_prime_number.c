#include "holberton.h"
/**
 * calcPrimeNumber - calc prime number using recursion
 * @n: number to check if it is prime
 * @div: divisor to check
 * Return: 1 if Prime; 0 if not
 */
int calcPrimeNumber(int n, int div)
{
	if (n == div)
		return (1);

	if ((n % div) == 0)
	{
		return (0);
	}
	else
		return (calcPrimeNumber(n, div + 1));

	return (-50); /* error */
}
/**
 * is_prime_number - find if n is a prime number
 * @n: number to check
 * Return: 1 if n is Prime; 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 0)         /* error */
		return (0);
	else if (n == 1)    /* error */
		return (0);
	else
		return (calcPrimeNumber(n, 2));
}
