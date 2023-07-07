#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number
 *                  to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if
 *         there is one or more chars in the string b that is not 0 or 1.
 *         b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	bool valid_binary = true;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			result <<= 1;
		else if (b[i] == '1')
		{
			result <<= 1;
			result |= 1;
		}
		else
		{
			valid_binary = false;
			break;
		}
	}
	if (!valid_binary)
		return (0);

	return (result);
}
