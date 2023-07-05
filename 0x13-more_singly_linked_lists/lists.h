#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_ls - singly linked list.
 * @data: integer in each node.
 * @next: pointer to the next node.
 *
 * Description: singly linked list struct.
 */
typedef struct listint_ls
{
	int data;
	struct listint_t *next;
} listint_t;

int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);

#endif
