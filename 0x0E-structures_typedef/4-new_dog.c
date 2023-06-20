#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcopy(char *dest, char *src);

/**
 * _strlen - a function that gets length
 *           of a string.
 *
 * @s: the input string.
 *
 * Return: length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcopy - copies a string.
 *
 * @dest: duplicate string.
 * @src: source to be copied.
 *
 * Return: a pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = (char *)malloc(sizeof(char) * (_strlen(name) + 1));
	new_dog->owner = (char *)malloc(sizeof(char) * (_strlen(owner) + 1));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcopy(new_dog->name, name);
	new_dog->age = age;
	new_dog->owner = _strcopy(new_dog->owner, owner);

	return (new_dog);
}





