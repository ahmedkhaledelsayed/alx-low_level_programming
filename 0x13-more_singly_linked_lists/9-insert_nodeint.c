#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts 
 * a new node at a given position.
 * @head: head of the list
 * @idx: integer to the required index
 * @n: integer for required data
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	temp = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL ;i++)
		{
			temp = temp -> next;
		}
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new -> n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
