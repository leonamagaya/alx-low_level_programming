#include <stdlib.h>
/**
 * int_index - A function that searches for an integer.
 *
 * @array: input array of integers.
 * @size: number of elements in the array.
 * @cmp: pointer to a function used to compare values.
 *
 * Return: index of the first elemnt for which cmp does
 *         return 0.
 *         if no element matches reurn -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
