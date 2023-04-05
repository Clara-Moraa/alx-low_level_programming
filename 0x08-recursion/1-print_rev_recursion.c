#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string.
 * Return: no return.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

int main(void)
{
	char str[] = "Hello, World!";
	_print_rev_recursion(str);
	putchar('\n');

	return (0);
}

