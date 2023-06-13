#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - A function that converts strings
 *         to integers.
 *
 * @str: input string.
 *
 * Return: integer that was once string.
 */
int _atoi(char *str)
{
	int result = 0, i = 0;
	int sign = 1;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			printf("Error\n");
			return (1);
		}

		result = result * 10 + (str[i] - '0');
		i++;
	}

	return (result * sign);
}

/**
 * main - a program that adds positive numbers.
 *
 * @argc: count of the arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, number, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		number = _atoi(argv[i]);

		if (number == 1)
			return (1);

		if (number > 0)
			sum += number;
	}

	printf("%d\n", sum);

	return (0);
}
