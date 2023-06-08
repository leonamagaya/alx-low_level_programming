#include "main.h"

int _find_sqrt(int n, int start, int end);

/**
 * _find_sqrt - Finds the natural square root of an integer.
 *
 * @n: input integer.
 * @start: integer start search.
 * @end: integer end search.
 *
 * Return: sqrt (success)
 *         OR -1 (fail)
 */
int _find_sqrt(int n, int start, int end)
{
	if (start <= end)
	{
		int mid = (start + end) / 2;
		int square_mid = mid * mid;

		if (square_mid == n)
		{
			return (mid);
		}
		else if (square_mid < n)
		{
			return (_find_sqrt(n, mid + 1, end));
		}
		else
		{
			return (_find_sqrt(n, start, mid - 1));
		}
	}
	else
		return (-1);
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
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (_find_sqrt(n, 0, n));
}

