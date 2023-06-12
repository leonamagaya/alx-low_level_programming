#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings.
 *
 * @s1: an input string.
 * @s2: an input string.
 *
 * Return: pointer to the newly space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0, len2 = 0;
	char *new_str;

	if (s1 == NULL)
		s1[0] = '\0';

	if (s2 == NULL)
		s2[0] = '\0';

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	new_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		new_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		new_str[len1 + j] = s2[j];

	new_str[len1 + len2] = '\0';

	return (new_str);
}

