#include "main.h"
/**
 * get_bit -  function that returns the value of a bit
 *            at a given index.
 * @n: input integer.
 * @index: is the index of the bit you want to get.
 * Return: the value of the bit at index index
 *          OR -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= sizeof(unsigned long int) * 8)
        return -1;

    unsigned long int mask = 1 << index;

    if ((n & mask) != 0)
        return 1;
    else
        return 0;
}
