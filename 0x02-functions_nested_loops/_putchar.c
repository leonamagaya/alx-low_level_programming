#include "main.h"
#include <unistd.h>

/**
 * _putchar - the fuction will write c to standard output
 *
 * Return: 1 (success), otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
