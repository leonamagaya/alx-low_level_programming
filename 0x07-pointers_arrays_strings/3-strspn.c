#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: input string.
 * @accept: an input char to locate in s
 *
 * Return: a pointer to the position of c.
 */
unsigned int _strspn(char *s, char *accept)
{
	int c = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}

