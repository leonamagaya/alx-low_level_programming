/*
 * File: 2-calloc.c
 * Auth: Leona Magaya
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc.
 *
 * @nmemb: number of elements.
 * @size: byte size of each array element.
 *
 * Return: NULL if nmemb = 0, size = 0, or the function fails.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*(s + i) = 0;

	return (s);
}

