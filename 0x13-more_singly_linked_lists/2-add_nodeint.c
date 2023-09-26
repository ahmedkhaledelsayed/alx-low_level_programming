#include "lists.h"

/**
 * add_nodeint - function that adds a new node 
 * at the beginning of a listint_t list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_l;

	new_l = malloc(sizeof(listint_t));
	if (new_l == NULL)
	{
		return (NULL);
	}
	new_l->n = n;
	new_l->next = *head;
	*head = new_l;
	return (*head);
}