#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: first string to be appended to.
 * @src: second string to append to *dest.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a, b; /* lengths of the strings*/

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
