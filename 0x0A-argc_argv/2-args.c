/*
 * File: 2-args.c
 * Auth: Leona Magaya.
 */

#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *        only print one argument per line.
 *        ending with a new line.
 *
 * @argc: argument counter.
 * @argv: argument value.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	return (0);
}
