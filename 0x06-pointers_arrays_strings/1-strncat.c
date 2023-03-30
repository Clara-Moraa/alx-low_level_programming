#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string to be appended.
 * @src: string to append to the first.
 * @n: number of bytes of src that will be used.
 * Return: pointer of resulting dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

