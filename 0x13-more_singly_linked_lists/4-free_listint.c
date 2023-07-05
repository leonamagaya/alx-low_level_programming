#include "lists.h"

/**
 * free_listint - a function that frees a list_t list.
 *  @head: pointer to a struct.
 *  Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
