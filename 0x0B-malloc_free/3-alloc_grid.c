#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to a
 *              2 dimensional array of integers.
 *
 * @width: an input integer for number of columns.
 * @height: an input integer for number of rows.
 *
 * Return: pointer to a 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int h_indx, w_indx;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (h_indx = 0; h_indx < height; h_indx++)
	{
		grid[h_indx] = (int *)malloc(width * sizeof(int));

		if (grid[h_indx] == NULL)
		{
			for (h_indx = 0; h_indx < height; h_indx++)
				free(grid[h_indx]);
			free(grid);
			return (NULL);
		}
	}

	for (h_indx = 0; h_indx < height; h_indx++)
		for (w_indx = 0; w_indx < width; w_indx++)
			grid[h_indx][w_indx] = 0;

	return (grid);
}




