#include <stdio.h>

/**
 * main - the function prints the size of various types on the computer
 *        it is compiled and run on.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(c));

	return (0);
}
