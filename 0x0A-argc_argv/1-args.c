#include <stdio.h>
/**
 * main - A program that prints the number of arguments passed into it.
 *
 * @argc: count of the arguments supplied to the program.
 * @argv: array of pointers to the arguments
 *
 * Return: 0.
 */
int  main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
