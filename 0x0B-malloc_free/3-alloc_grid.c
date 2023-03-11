/*
 * File: 3-alloc_grid.c
 * Auth: Leona Magaya
 */

#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 *              2 dimensional array of integers.
 *
 *
 * @height: the height of a two dimensional array.
 * @width: the width of a two dimensional array.
 *
 * Return: NULL if width <= 0, height <= 0, or the function fails.
 *         otherwise a pointer to a two dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **array_2D;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2D = malloc(sizeof(int *) * height);

	if (array_2D == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array_2D[i] = malloc(sizeof(int) * width);

		if (array_2D[i] == NULL)
		{
			for (; i >= 0; i--)
				free(array_2D[i]);

			free(array_2D);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array_2D[i][j] = 0;
	}

	return (array_2D);

}
