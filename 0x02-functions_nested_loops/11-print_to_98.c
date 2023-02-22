#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a newline
 *               separated by a comma, followed by a space, in order
 * @n: number we start counting at.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}

