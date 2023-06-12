#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2D grid.
 *
 * @grid: input 2D grid.
 * @height: number of rows in the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
