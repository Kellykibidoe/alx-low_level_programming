#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees 2 dimensional grid created by alloc_grid function.
* @grid: multidimesional array of int
* @height: height of the grid
* Return: no return
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
