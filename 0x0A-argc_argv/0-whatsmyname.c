#include <stdio.h>
/**
 * main - A program tha prints name, followed
 *        by a new line.
 *
 * @argc: number of command line arguments
 * @argv: array of size argv
 *
 * Return: 0
 */
int  main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
