#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to previously allocated memory.
 * @old_size: old size in bytes of memory allocated space.
 * @new_size: new size in bytes of memory to be allocated.
 *
 * Return: void pointer to new memory location.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *new_loc, *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	new_loc = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;

	for (i = 0; i < old_size; i++)
		new_loc[i] = new_ptr[i];
	free(ptr);

	return (new_loc);
}
