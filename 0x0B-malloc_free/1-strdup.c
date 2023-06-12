#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a
 *           newly allocated space in memory which
 *          contains a copy of the string given as a parameter.
 *
 * @str: an input string.
 *
 * Return: On success - pointer to the duplicated string.
 *         if insufficient memory.
 */
char *_strdup(char *str)
{
	int i;
	int size = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (*str)
		size++;

	new_str = (char *)malloc(sizeof(char) * size);
	if (new_str == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		new_str[i] = str[i];

	return (new_str);
}
