#include "main.h"
/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: an input integer taken by the function.
 * Return: the factorial of a positive integer.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
