#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

/**
 * struct singly_list - singly linked list.
 * @str: string within node.
 * @len: length of the string.
 * @next: the next node.
 * Description - singly linked list.
 */
typedef struct singly_list
{
	char *str;
	unsigned int len;
	struct singly_list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
