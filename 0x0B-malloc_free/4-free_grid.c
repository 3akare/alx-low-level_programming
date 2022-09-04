#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees up memory to prevent leaks
 * @grid: a 2 dimensional array
 * @height: the height of the array
 *
 * Returns: 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (height <= 0)
		exit(0);
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
	exit(0);
}
