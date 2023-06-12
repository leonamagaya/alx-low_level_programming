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
	int i = 0;
	int length = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		length++;

	new_str = (char *)malloc(sizeof(char) * length);

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		new_str[i] = str[i];

	new_str[length] = '\0';

	return (new_str);
}
