#include "main.h"
#include <stdio.h>

int is_palindrome_helper(char *s, int start, int end);

/**
 * _strlen_recursion - A function that returns the length of a string.
 *
 * @s: an input string.
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * is_palindrome_helper - A function that performs the
 *                        palindrome check recursively.
 *
 * @s: an input string.
 * @start: first index of the string.
 * @end: last index of the string.
 *
 * Return: If it is a palindrome - 1
 *         Else - 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a Palindrome
 *
 * @s: an input string.
 *
 * Return: If it is a palindrome - 1
 *         Else - 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
