#include "main.h"

/**
 * set_bit - a function that sets the value of a
 *           bit to 1 at a given index.
 * @index: the index, starting from 0 of the bit
 *         you want to set.
 * @n: the number to set bit.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max_bits;

	max_bits = sizeof(unsigned long int) * 8;

	if (n == NULL || index >= max_bits)
		return (-1);

	max_bits <<= index;
	if (max_bits == 0)
		return (-1);
	*n |= max_bits;
	return (1);
}
