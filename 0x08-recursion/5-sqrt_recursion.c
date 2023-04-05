#include "main.h"

/**
 * find_sqrt - Finds the square root of a number.
 * @n: The number to find the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The square root of @n, or -1 if @n doesn't have a natural square.
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (find_sqrt(n, i + 1));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: The square root of @n, or -1 if @n doesn't have a natural square.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

