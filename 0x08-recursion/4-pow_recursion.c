#include "main.h"
/**
 * _pow_recursion - prints the value of the  power of a number.
 * @x: number to be raised by a power(base).
 * @y: power of a number to raise(exponent).
 * Return: -1 if y is lower than 0;
 * else return value.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
