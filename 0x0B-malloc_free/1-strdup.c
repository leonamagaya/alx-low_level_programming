/*
 * File: 1-strdup.c
 * Auth: Leona Magaya
 */
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 *           in memory containing a copy of the string given as a parameter.
 *
 * @str: a string that is to be copied.
 *
 * Return: NULL (if str == NULL || insufficient memory)
 *         otherwise a pointer to new string.
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	new_str = malloc(sizeof(char) * (len + 1));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		new_str[i] = str[i];

	new_str[len] = '\0';

	return (new_str);
}

