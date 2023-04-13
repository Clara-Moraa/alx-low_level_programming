#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: A pointer to the concatenated space in memory.
 *	   NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int len1 = 0, len2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len1) != '\0')
		len1++;

	while (*(s2 + len2) != '\0' && len2 < n)
		len2++;

	conc = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(conc + i) = *(s1 + i);

	for (i = 0; i < len2; i++)
		*(conc + len1 + i) = *(s2 + i);

	*(conc + len1 + len2) = '\0';

	return (conc);
}

