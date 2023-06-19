#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable
 *            of type struct dog
 *
 * @d: the struct to be initialised.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(EXIT_FAILURE);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
