#include <stdio.h>

/**
 * main - Prints hexadecimal values.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	char hex;

	for (n = 0; n < 10; n++)
	{
		putchar((n % 10) + '0');
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}

	putchar('\n');

	return (0);
}
