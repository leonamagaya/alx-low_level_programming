#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @max: max number to start.
 * @min: min number to start.
 *
 * Return: a pointer to array.
 */
int *array_range(int min, int max)
{
	int *array;
	int result, i;

	if (min > max)
		return (NULL);

	result = max - min;
	array = malloc((result + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= result; i++)
		array[i] = min++;

	return (array);
}
