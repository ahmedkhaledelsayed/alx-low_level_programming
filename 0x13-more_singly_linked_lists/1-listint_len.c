#include "lists.h"
/**
 * listint_len - function that returns no. of elements in listint_t list
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
