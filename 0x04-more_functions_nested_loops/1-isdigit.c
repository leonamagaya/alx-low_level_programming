#include "main.h"

/**
 * _isdigit - a function that checks for a digit (0 through 9)
 * @c: the input that will checked.
 *
 * Return: 1 if c is an integer.
 *         0 otherwise
 */
int _isdigit(int c)
{
	char i;
	int isdigit = 0;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
