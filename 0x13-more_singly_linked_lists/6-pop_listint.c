#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a linked list.
 * @head: pointer to a struct.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *new_node;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;

	return (n);
}
