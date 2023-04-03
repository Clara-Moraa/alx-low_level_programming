#include "main.h"

/**
 * _memset - fills first n bytes of s pointer with constant byte b
 * @s: poniter to memory area
 * @b: constant character to fill memory area
 * @n: number of bytes to be filled
 *
 * Return: pointer to filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
