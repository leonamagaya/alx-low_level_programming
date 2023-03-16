/*
 * File: 0-malloc_checked.c
 * Auth: Leona Magaya
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: input integer.
 *
 * Return: a pointer to the allocated memomry.
 *         NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
