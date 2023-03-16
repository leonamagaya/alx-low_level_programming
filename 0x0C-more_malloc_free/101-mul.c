#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two positive numbers.
 *
 * @argc: number of arguments.
 * @argv: arguments.
 *
 * Return: nothing.
 */

int main(int argc, char **argv)
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		prod = num1 * num2;
		printf("%d\n", prod);

		return (0);
	}
}
