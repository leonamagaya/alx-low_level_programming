#include "lists.h"

/**
 * listint_len - a function that returns the
 *               number of elements in a linked list.
 * @h: pointer to a node.
 * Return: number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
