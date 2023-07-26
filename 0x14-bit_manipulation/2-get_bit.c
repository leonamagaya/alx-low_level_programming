#include "main.h"
/**
 * get_bit -  function that returns the value of a bit
 *            at a given index.
 * @n: input integer.
 * @index: is the index of the bit you want to get.
 * Returns: the value of the bit at index index
 *          OR -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);

	if ((n & max))
		return (1);
	else
		return (0);
}
