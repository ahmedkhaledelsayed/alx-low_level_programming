#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a listint_t list
 * @h: singly linked list print
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		h = h->next;
	}
	return (index);
}