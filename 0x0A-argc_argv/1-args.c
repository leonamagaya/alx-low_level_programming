/*
 * File: 1-args.c
 * Auth: Leona Magaya
 */

#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it
 *        followed by a new line.
 *
 * @argc: argument counter.
 * @argv: argument values.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
