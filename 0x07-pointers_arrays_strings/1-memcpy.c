#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest memory area
 *
 * @n: bytes to be copied
 * @src: memmory area to be copied from
 * @dest: momory area copied to
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

char *dest_ptr = dest;
    char *src_ptr = src;

	while (n--)
	{
	*dest_ptr++ = *src_ptr++;
	}

	return (dest);
}
