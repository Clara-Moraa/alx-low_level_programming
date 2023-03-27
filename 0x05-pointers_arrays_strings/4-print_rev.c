#include "main.h"
/**
 * print_rev - prints a string in reverse.
 * @s: string to be printed.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int a, b, len;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	len = a;
	for (b = len - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
