#include <unistd.h>

/**
 * main - writes character to standard output.
 * @c: character to the printed
 *
 * Return: 1 (Success)
 *        -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
