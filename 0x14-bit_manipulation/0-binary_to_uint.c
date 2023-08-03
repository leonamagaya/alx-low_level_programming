#include "main.h"

/**
 * binary_to_uint - a function that converts a binary
 *                  number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars.
 * Return: converted number
 *         else 0 if there is one or more chars in the
 *         string b that is not 0 or 1. OR b == NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_number;
	int bit, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		bit = b[i] - '0';

		if (bit != 0 && bit != 1)
			return (0);

		converted_number = (converted_number << 1) | bit;
	}

	return (converted_number);
}




