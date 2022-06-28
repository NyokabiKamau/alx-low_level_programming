#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid previously created by your alloc_grid function
 * @grid: grid to be checked
 * @height: height of grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL || height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
