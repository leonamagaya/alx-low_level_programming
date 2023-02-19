#include <stdio.h>

/**
 * main - the function prints prints all single digit numbers
 *         of base 10 starting from 0 using putchar.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');

	return (0);
}
