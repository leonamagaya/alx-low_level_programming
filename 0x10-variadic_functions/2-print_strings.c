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
	char *str;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			str = "(nil)";

		printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
