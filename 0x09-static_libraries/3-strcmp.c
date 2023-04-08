#include"main.h"
/**
 * _strcmp - function compares two strings.
 * @s1: first string to compare.
 * @s2: second string to compare.
 *
 * Return: If s1 is less than s2 (less than 0),
 * If s1 equal to s2 (0), s1 is greater than s2 (greater than 0).
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
