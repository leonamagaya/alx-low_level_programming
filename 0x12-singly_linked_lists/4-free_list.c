#include "lists.h"

/**
 * free_list - a function that frees a list_t list.
 * @head: head of the list.
 * Return: nothing.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}

