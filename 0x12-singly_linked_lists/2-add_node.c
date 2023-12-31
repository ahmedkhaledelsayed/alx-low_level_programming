#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head
 * @str: node to add
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t index = 0;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	while (str[index])
	{
		index++;
	}

	node->len = index;
	node->next = *head;
	*head = node;

	return (*head);
}
