#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 *             need to flip to get another number.
 * @n: first input integer.
 * @m: second input integer.
 * Return: number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_diff;
	unsigned int total_bits = 0;

	xor_diff = n ^ m;

	while (xor_diff != 0)
	{
		total_bits += (xor_diff & 1);
		xor_diff >>= 1;
	}

	return (total_bits);
}

