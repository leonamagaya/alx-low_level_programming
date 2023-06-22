#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function for program.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: if success 0
 *         else 98, 99, 100.
 */
int main(int argc, char **argv)
{
	int  (*function)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	
	function = get_op_func(argv[2]);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (function == NULL)
	{
		printf("Error\n");
		return (99);
	}

	printf("%d\n", function(a, b));
	return (0);
}
