#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - a function that frees a dog structure.
 * @d: pointer to a struct to free.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
