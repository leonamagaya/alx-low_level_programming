#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 *             you would need o flip to get from one number
 *             to another.
 * @n: input integer.
 * @m: input integer.
 * Return: the number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		i += result & 1;
		result >>= 1;
	}

	return (i);
}
