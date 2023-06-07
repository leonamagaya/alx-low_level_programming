#include "main.h"
/**
 *  _puts_recursion - A function that prints a string, followed by a new line.
 *  @s: an input string to the function
 *  return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s)
	{	_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
