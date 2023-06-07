#include <stdio.h>
/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: the input string that is accepted by the function.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);

}
