#include <stdio.h>

/**
 * main - Executed first, prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
