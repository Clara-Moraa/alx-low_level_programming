#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to get length of
 *
 * Return: length of @s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}

	return (length);
}
