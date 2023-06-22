#include <stdlib.h>
/**
 * array_iterator - A function that executes a function given as a
 *                  parameter on each element of an array.
 *
 * @size: size of the array
 * @action: a pointer to the function you need to use.
 * @array: input array.
 *
 * Return: nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
