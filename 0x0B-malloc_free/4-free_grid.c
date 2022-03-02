#include "main.h"
#include <stdlib.h>
/**
* free_grid - function that frees 2 dimensional grid.
* @grid: Pointer to pointer.
* @height: Variable.
*/
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
