#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int base = 0;

	if (*s)
	{
		base++;
		_strlen_recursion(s + 1) += base;
	}
	return (base);
}
