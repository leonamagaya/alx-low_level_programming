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
	unsigned int total_bits;

	for (xor_diff = n ^ m; xor_diff != 0; xor_diff &= (xor_diff - 1))
		total_bits++;

	return (total_bits);
}
