#include "main.h"
/**
 * _pow_recursion - A function that returns the value
 *                  of x raised by the power of y.
 *
 * @x: the base.
 * @y: the exponent.
 * Return: the yth power of x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
