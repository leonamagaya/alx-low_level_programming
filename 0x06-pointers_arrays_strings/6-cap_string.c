#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: input string.
 *
 * Return: pointer to s.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;

		if (s[i - 1] == ' ' ||
				s[i - 1] == '\t' ||
			       	s[i - 1] =='\n' ||
			       	s[i - 1] == ',' ||
			       	s[i - 1] == ';' ||
			       	s[i - 1] == '.' ||
			       	s[i - 1] == '!' ||
			       	s[i - 1] == '?' || 
				s[i - 1] == '"' ||
			       	s[i - 1] == '(' ||
				s[i - 1] == ')' ||
			       	s[i - 1] == '{' ||
			       	s[i - 1] == '}' ||
			       	i == 0)
			s[j] -= 32;
		
		i++;
	}

	return (s);
}
