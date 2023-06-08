#include "main.h"

int _find_sqrt(int n, int guess);

/**
 * _find_sqrt - Finds the natural square root of an integer.
 *
 * @n: input integer.
 * @guess: input integer.
 *
 * Return: sqrt (success)
 *         OR -1 (fail)
 */
int _find_sqrt(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return (guess);
	else if (square > n)
		return (-1);
	else
		return (_find_sqrt(n, guess + 1));
}

/**
 * _sqrt_recursion - A function that returns the natural
 *                   square root of a number.
 *
 * @n: an input integer.
 *
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	int guess = 0;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_find_sqrt(n, guess));
}

