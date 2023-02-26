#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: the character printed to standard output
 *
 * Return: 1 (Success).
 *        -1 otherwise.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
