#include "main.h"

/**
 * calculatePower - calculates the power of a number recursively.
 *
 * @x: The base number.
 * @y: The exponent number.
 *
 * Return: The result of x raised to the power of y, or -1 if y is less than 0.
 */
int calculatePower(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * calculatePower(x, y - 1));
	}
}

