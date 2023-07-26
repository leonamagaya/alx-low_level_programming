#include "main.h"

/**
 * clear_bit - a function that sets the value
 *             of a bit to 0 at a given index.
 * @n: pointer to a value.
 * @index:  is the index, starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
