#include "main.h"
/**
 * _print_rev_recursion - A function that prints a string in reverse.
 *
 * @s: an input string that is to be taken by the function.
 * Return: nothing.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
