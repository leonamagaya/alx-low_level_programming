#include "main.h"

/**
 * clear_bit - a function that sets the value
 *             of a bit to 0 at a given index.
 * @index: index, starting from 0.
 * @n: input ineger.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int max;
	unsigned long int mask;

	max = sizeof(unsigned long int) * 8;

	if (n == NULL || index >= max)
		return (-1);

	mask = 1UL << index;
	mask = ~mask;
	*n &= mask;

	return (1);
}
