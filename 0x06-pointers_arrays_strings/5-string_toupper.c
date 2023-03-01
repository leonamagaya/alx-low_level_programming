#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 *                  to uppercase.
 * @s: input string.
 *
 * Return: pointer to converted string.
 */
char *string_toupper(char *s)
{
	char *begin = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}

	return (begin);
}
