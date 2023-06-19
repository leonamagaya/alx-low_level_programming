#include "dog.h"
#include <stdio.h>
/**
 * print_dog - a function that prints a struct dog.
 *
 * @d: the struct to be printed
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %0.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
