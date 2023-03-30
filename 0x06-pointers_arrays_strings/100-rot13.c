#include "main.h"

/**
 * rot13 - function that encodes a string in rot13.
 * @s: string encoded.
 *
 * Return: the resulting string.
 */
char *rot13(char *s)
{
	int x, y;

	char f[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char g[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; f[y] != '\0'; y++)
		{
			if (s[x] == f[y])
			{
				s[x] = g[y];
				break;
			}
		}
	}

	return (s);
}
