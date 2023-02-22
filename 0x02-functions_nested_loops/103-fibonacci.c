#include <stdio.h>

/**
 * main -  finds and prints the sum of the even-valued terms,
 *         followed by a new line, not exceeding 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	float total_sum;
	unsigned long fib1 = 0, fib2 = 1, sum_of_fib;

	while (1)
	{
		sum_of_fib = fib1 + fib2;
		if (sum_of_fib > 4000000)
			break;

		if ((sum_of_fib % 2) == 0)
			total_sum = total_sum + sum_of_fib;

		fib1 = fib2;
		fib2 = sum_of_fib;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
