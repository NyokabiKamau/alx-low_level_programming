#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of int
 * each ellement of the grid should initialize to 0
 * @width: width of grid
 * @height: height of grid
 * Return: NULL on failure or if width/height is 0 or -ve
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **)malloc(height * sizeof(a));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}
	return (a);
}

