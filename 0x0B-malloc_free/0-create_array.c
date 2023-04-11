#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array to be initialized.
 * @c: specific char to intialize the array with.
 *
 * Return: NULL if size == 0 or the function fails
 * otherwise a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}
	j = malloc(sizeof(char) * size);
	if (j == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
