#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: If success - pointer to struct
 *         of the new dog.
 *         Else NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[len_name] != '\0')
		len_name++;

	new_dog->name = (char *)malloc(sizeof(char) * (len_name + 1));

	while (name[len_owner] != '\0')
		len_owner++;

	new_dog->owner = (char *)malloc(sizeof(char) * (len_owner + 1));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		new_dog->name[i] = name[i];
	new_dog->name[len_name] = '\0';

	for (i = 0; i <= len_owner; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[len_owner] = '\0';

	new_dog->age = age;

	return (new_dog);
}





