#include "lists.h"
/**
 * insert_nodeint_at_index -  a function that inserts a new node
 *                            at a given position.
 * @head: pointer to a node.
 * @idx: the index of the list where the new node should be added
 * @n: integer to be added in new node.
 * Return:  the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node, *dup;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	dup = *head;

	if (idx == 0)
	{
		new_node->next = dup;
		*head = new_node;
		return (new_node);
	}

	while (count < (idx - 1))
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
		count++;
	}

	new_node->next = dup->next;
	dup->next = new_node;

	return (new_node);
}
