#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point.
 * @grid: grid to be freed
 * @height: height of grid
 *
 * Description: free grid.
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i <	height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
