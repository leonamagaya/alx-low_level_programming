#include "main.h"
/**
 *  _puts_recursion - A function that prints a string, followed by a new line.
 *
 *  return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		 _putchar('\n');
	else if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
