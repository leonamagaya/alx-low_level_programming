/*
 * File: 0-whatsmyname.c
 * Auth: Leona Magaya
 */
#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line.
 *        if the program is renamed.
 *        it will print the new name.
 *        without having to compile it again.
 *
 * @argc: arguement count.
 * @argv: argument value.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
