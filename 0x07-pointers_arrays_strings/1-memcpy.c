#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @src: memory area to be copied from.
 * @dest: memory area to be copied to.
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
