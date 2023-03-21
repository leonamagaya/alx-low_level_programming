#include <unistd.h>

/**
 * _putchar - a function that prints the character c to stdout.
 *
 * @c: the character to be printed.
 *
 * Return: 1 (success)
 *        -1 (on error) and the errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
