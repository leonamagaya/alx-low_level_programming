#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *            in a linked list_t list
 * @h: head of the list.
 * Return: numbr of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
