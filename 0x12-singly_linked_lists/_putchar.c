#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character written to stdout
 *
 * Return: 1 (Success)
 *         -1 on error and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
