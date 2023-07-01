#include "lists.h"

/**
 * add_node -  a function that adds a new node at the
 *             beginning of a list_t list
 * @head: head of the list.
 * @str: string to be duplicated.
 * Return: NULL if it fails.
 *         else return thr address of new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	int len;

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
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}





