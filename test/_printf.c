#include "main.h"

/**
 * _printf - Prints output according to a format.
 * @format: Input format string.
 * Return: Number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int index, num_char = 0;
	char *s;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (index = 0; format[index] != '\0'; index++)
	{
		if (format[index] == '%' && format[index + 1] == '\0')
		{
			return (-1);
		}
		else if (format[index] == '%')
		{
			index++;
			if (format[index] == 'c')
			{
				int c = va_arg(args, int);

				num_char += print_character(c);
			}
			else if (format[index] == 's')
			{
				s = va_arg(args, char *);
				num_char += print_string(s);
			}
			else if (format[index] == '%')
			{
				num_char += print_character('%');
			}
			else
			{
					_putchar('%');
					_putchar(format[index]);
					num_char += 2;
			}
		}
		else
		{
			num_char += print_character(format[index]);
		}
	} va_end(args);
	return (num_char);
}
