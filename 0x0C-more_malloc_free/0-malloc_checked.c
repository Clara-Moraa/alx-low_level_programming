#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory of size @b.
 *
 * @b: Size of memory to be allocated.
 *
 * Return: Pointer to the allocated memory.
 *         In case of failure, normal process termination
 *         with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

