#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: input array.
 * @n: number of elements of the array.
 *
 * Return:
 */
void reverse_array(int *a, int n)
{
	int tmp, i = 0;

	while (i < n--)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
