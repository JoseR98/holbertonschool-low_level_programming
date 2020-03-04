#include <stdlib.h>

/**
 * free_grid - free a grid
 * @grid: grid
 * @height: height grid
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
