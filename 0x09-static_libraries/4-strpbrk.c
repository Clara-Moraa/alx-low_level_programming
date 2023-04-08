#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 *
 * @s: The string pointer to be searched.
 * @accept: The string pointer to be searched for.
 *
 * Return: A pointer to the matched byte if a set is matched.
 *	   NULL if otherwise.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, x;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (x = 0; *(accept + x) != '\0'; x++)
		{
			if (*(s + i) == *(accept + x))
				return (s + i);
		}
	}
	return ('\0');
}
