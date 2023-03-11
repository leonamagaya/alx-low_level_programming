/*
 * File: 4-free_grid.c
 * Auth: Leona Magaya
 */

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 *             created by your alloc_grid function.
 *
 * @grid: 2-dimensional array of integers to be freed.
 * @height: the height of a grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
