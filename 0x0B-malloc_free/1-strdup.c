#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Duplicates string @str
 *
 * @str: the string to be duplicated.
 *
 * Return: NULL if str == NULL
 *	   A pointer to duplicated string on success.
 *	   NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *dup;
	int a;
	int b = 0;

	if (str == NULL)
		return (NULL);

	for (a = 0 ; str[a]; a++)
		j++;

	dup = malloc(sizeof(char) * (b + 1));
	if (dup == NULL)
		return (NULL);

	for (a = 0 ; str[a]; a++)
		dup[a] = str[a];

	dup[b] = '\0';

	return (dup);
}
