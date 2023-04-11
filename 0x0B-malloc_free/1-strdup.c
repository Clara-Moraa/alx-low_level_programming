#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory.
 * @str: string
 *
 * Return: NULL if string is NULL or insufficient memory
 * otherwise pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	unsigned int i, j;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	i++;


	c = (char *)malloc(sizeof(char) * i);
	if (c == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		c[j] = str[j];
	}
	return (c);
}
