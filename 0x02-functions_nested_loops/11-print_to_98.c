#include <stdio.h>

/**
 * print_to_98 - prints to 98 separated by a comma and space
 * @n: the starting point of the integer
 *
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
