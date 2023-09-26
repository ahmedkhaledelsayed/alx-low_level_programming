#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list.
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_l, *temp;

	new_l = malloc(sizeof(listint_t));
	if (new_l == NULL)
	{
		return (NULL);
	}
	new_l->n = n;
	new_l->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_l;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_l;
	}
	return (*head);
}
