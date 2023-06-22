#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum
 *                of all its parameters.
 *
 * @n: number of parameters taken by the function.
 *
 * Return: if n == 0 return 0
 *         else - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);

	va_end(args);

	return (sum);
}
