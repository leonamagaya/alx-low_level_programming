#include "main.h"

/**
 * get_bit - a function that returns the value
 *          of a bit at a given index.
 * @index:  the index, starting from 0 of the bit
 *          you want to get.
 * @n: number to get bit from.
 * Return: the value of the bit at index index or
 *         -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	unsigned int max_bits;

	max_bits = sizeof(unsigned long int) * 8;

	if (index >= max_bits)
		return (-1);

	mask = 1UL << index;

	if ((n & mask))
		return (1);
	else
		return (0);
}


