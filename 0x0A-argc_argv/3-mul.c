/*
 * File: 3-mul.c
 * Auth: Leona Magaya
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *        prints the result, followed by a new line.
 *
 * @argc: arguments counter.
 * @argv: arguments values.
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}

