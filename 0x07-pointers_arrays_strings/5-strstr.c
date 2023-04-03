#include "main.h"

/**
 * _strstr - Finds the first occurence of the
 *	     substring @needle in string @haystack.
 *
 * @needle: Substring to be located.
 * @haystack: Location of substring @needle.
 *
 * Return: Pointer to the beginning of located substring.
 *	   NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *cow;
	char *tayler;

	while (*haystack != '\0')
	{
		cow = haystack;
		tayler = needle;

		while (*haystack != '\0' && *tayler != '\0' && *haystack == *tayler)
		{
			haystack++;
			tayler++;
		}
		if (!*tayler)
			return (cow);
		haystack = cow + 1;
	}
	return (0);
}
