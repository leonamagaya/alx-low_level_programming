/*
 * File: 4-add.c
 * Auth: Leona Magaya
 */

#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *        print result, followed by a new line.
 *        if no number is passed to program, print 0.
 *        if one of the number contains symbols that are not
 *        digits print Error,
 *        return 1.
 *
 * @argc: arguments counter.
 * @argv: arguments value.
 *
 * Return: -1 if one of the numbers contains
 *         symbols that aren't digits.
 *         0 otherwise.
 */

int main(int argc, char *argv[])
{
	int num, i, result = 0;

	for (num = 1; num < argc; num++)
	{
		for (i = 0; argv[num][i]; i++)
		{
			if (argv[num][i] < '0' || argv[num][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[num]);

	}
	printf("%d\n", result);

	return (0);
}
