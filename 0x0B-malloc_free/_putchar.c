#include <unistd.h>

/**
 * _putchar - writes the character c to stdout.
 * @c: The characte to be printed.
 *
 * Return: 1 (success)
 *        -1 (on error) and the errno.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
