#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its paramters.
 *
 * @n: the number of parameters passed to the function.
 * @...: a variable number of parameters to calculate the sum of.
 *
 * Return: 0 if n == 0
 *         otherwise returns the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
