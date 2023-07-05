#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>

/**
 * struct listint_t - singly linked list.
 * @data: integer in each node.
 * @next: pointer to the next node.
 *
 * Description: singly linked list struct.
 */
typedef struct listint_t
{
	int data;
	struct listint_t *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
