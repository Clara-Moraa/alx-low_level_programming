#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to memory previously allocated.
 * @old_size: Size in bytes of the allocated space for @ptr.
 * @new_size: Size in bytes for the new memory block.
 *
 * Return: Pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	new_ptr = malloc(new_size);

	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	free(ptr);

	return (new_ptr);
}

