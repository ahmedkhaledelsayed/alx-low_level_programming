#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: given list
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t index;

	for (index = 0; h; index++)
	{
		h = h->next;
	}
	return (index);
}
