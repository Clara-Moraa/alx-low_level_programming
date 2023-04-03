#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: segment where the bytes are gotten from
 * @accept: source of bytes used in s
 *
 * Return: number of bytes in s consisting of only those
 *         from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, x;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		x = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				x = 0;
				break;
			}
		}
		if (x == 1)
			break;
	}
	return (i);
}
