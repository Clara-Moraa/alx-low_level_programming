#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns pointer to a 2D integers array.
 *
 * @width: Width of grid.
 * @height: UHeight of grid.
 *
 * Return: Pointer to 2D array.
 *	   NULL on failure && if width or height == 0.
 */
int **alloc_grid(int width, int height)
{
	int **arr, hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);
	hi = 0;
	while (hi < height)
	{
		arr[hi] = malloc(sizeof(int) * width);

		if (arr[hi] == NULL)
		{
			while (hi >= 0)
			{
				free(arr[hi]);
				hi--;
			}

			free(arr);
			return (NULL);
		}
		hi++;
	}

	for ( ; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
		{
			arr[hi][wi] = 0;
		}
	}

	return (arr);
}
