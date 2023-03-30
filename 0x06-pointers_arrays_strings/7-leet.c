#include "main.h"

/**
 * leet - funtion that encodes a string in 133.7.
 * @s: the  string to be encoded.
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int c, d;

	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (s[c] == x[d])
			{
				s[c] = y[d];
			}
		}
	}

	return (s);
}
