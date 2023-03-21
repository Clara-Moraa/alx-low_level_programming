#include "main.h"

/**
 * print_sign - prints sign of the number positive or negative
 * @n: number being checked
 *
 * Return: 1 if greater than zero, 0 if is zero and -1 if less than zero
 */

int print_sign(int n)
{
	char positive = '+';
	char negative = '-';
	char zero = '0';

	if (n > 0)
	{
		_putchar(positive);

		return (1);
	}
	else if (n == 0)
	{
		_putchar(zero);

		return (0);
	}
	else
	{
		_putchar(negative);

		return (-1);
	}
}
