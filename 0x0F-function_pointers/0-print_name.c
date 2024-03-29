#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A function that prints a name.
 *
 * @name: the name to be printed.
 * @f: function to print name.
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *name))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
