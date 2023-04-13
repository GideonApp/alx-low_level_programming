#include "main.h"

/**
 * free_grid - function that frees the memory
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
