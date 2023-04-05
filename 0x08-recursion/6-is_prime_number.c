#include "main.h"

/**
 * if_prime - checks if a given number is a prime number.
 * @d: number to divide with.
 * @f: number to check.
 *
 * Return: 1 if number is a prime number, otherwise 0.
 */
int if_prime(int d, int f)
{
	if (f < 2 || f % d == 0)
		return (0);
	else if (d > f / 2)
		return (1);
	else
		return (if_prime(d + 1, f));
}

/**
 * is_prime_number - checks if a given number is a prime number.
 * @n: number to check.
 *
 * Return: 1 if number is a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	else
		return (if_prime(2, n));
}

