#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linke list.
 *
 * @h: head of linked list
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
