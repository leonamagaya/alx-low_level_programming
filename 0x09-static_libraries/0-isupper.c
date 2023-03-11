#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase
 *         0 otherwise
 */
int _isupper(int c)
{
	char i;
	int isupper = 0;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
