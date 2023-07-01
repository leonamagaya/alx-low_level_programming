#ifndef _LISTS_H
#define _LISTS_H

#include <stdlib.h>

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
}list_t;

size_t print_list(const list_t *h);

#endif
