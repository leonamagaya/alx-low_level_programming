#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars,
 *                and initializes it with a specific char.
 *
 * @c: character to initialize array.
 * @size: the size of the array.
 *
 * Return: a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
