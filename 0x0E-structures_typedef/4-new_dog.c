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
	char *duplicate_name, *duplicate_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[len_name] != '\0')
		len_name++;

	duplicate_name = (char *)malloc(sizeof(char) * (len_name + 1));

	while (name[len_owner] != '\0')
		len_owner++;

	duplicate_owner = (char *)malloc(sizeof(char) * (len_owner + 1));

	if (duplicate_name == NULL || duplicate_owner == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
		duplicate_name[i] = name[i];
	duplicate_name[len_name + 1] = '\0';

	for (i = 0; i <= len_owner; i++)
		duplicate_owner[i] = owner[i];
	duplicate_owner[len_owner + 1] = '\0';

	new_dog->name = duplicate_name;
	new_dog->age = age;
	new_dog->owner = duplicate_owner;

	return (new_dog);
}





