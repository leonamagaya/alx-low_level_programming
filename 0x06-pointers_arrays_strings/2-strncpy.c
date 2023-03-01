#include "main.h"

/**
 * _strncpy - copies a string.
 * @src: input string.
 * @dest: input string.
 * @n: input integer.
 *
 * Return: a pointer to the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *tmp = dest, *start = src;
	int src_length = 0, i;

	while (*src)
	{
		src_length++;
		src++;
	}

	src_length++;

	if (n > src_length)
		n = src_length;

	src = start;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	return (tmp);
}
