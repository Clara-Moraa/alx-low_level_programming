#include "main.h"
/**
 * rev_string - print the reverse value of a thing.
 * @s: string to be reversed.
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;
	int c, d, e;

	d = 0;
	e = 0;

	while (s[d] != '\0')
	{
		d++;
	}

	e = d - 1;

	for (c = 0; c < d / 2; c++)
	{
		tmp = s[c];
		s[c] = s[e];
		s[e--] = tmp;
	}
}

