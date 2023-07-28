#include "main.h"

/**
 * print_string - Prints a string.
 * @s: The string to print.
 * Return: The number of characters printed.
 */

int print_string(char *s)
{
        int count = 0;

        if (s == NULL)
                s = "(null)";

        while (*s)
        {
                _putchar(*s);
                count++;
                s++;
        }
        return (count);
}

