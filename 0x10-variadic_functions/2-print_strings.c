#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - a function that prints strings.
 *
 * @separator: the string to be printed between
 *             the strings.
 * @n: total number of strings.
 *
 * Return: nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int i;

	va_start(strings);

	for ( i = ; i < n; i++)
	{
		if(va_arg(strings, n) == NULL)
			va_arg(strings, n) == "(nil)";

		printf("%d", va_arg(strings, n));

		if (separator != NULL && i != (n-1))
			printf("%s", separator);
	}
	print("\n");

	va_end(strings);
}
