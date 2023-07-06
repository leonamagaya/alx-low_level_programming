#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node
 *                           at index of a listint_t linked list.
 * @head: pointer to a struct.
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *current, *previous;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	previous = NULL;
	for (count = 0; current != NULL && count < index; count++)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);

	return (1);
}


