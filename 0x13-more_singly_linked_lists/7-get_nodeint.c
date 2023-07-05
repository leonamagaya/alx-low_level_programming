#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the
 *                        nth node of a listint_t linked list
 * @head: pointer to a struct.
 * @index: node to locate starting at 0.
 * Return: located node else returm NULL,
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}

