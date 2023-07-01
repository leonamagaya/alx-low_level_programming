#include "lists.h"

#include "lists.h"

/**
 * add_node_end -  a function that adds a new node at the
 *             end of a list_t list
 * @head: head of the list.
 * @str: string to be duplicated.
 * Return: NULL if it fails.
 *         else return the address of new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	char *dup_str;
	int len = 0;

	if (str == NULL)
		return (NULL);

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

	if (*head != NULL)
	{
		last_node = *head;
		while (last_node->next != NULL)
			last_node = last_node->next;
		last_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (*head);
}
