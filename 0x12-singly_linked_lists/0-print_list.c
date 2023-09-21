#include "list.h"

/**
 * print_list -  a function that prints all the elements of a list_t list.
 * @h: givem list to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t index;

	for (index = 0; h; index++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (index);
}
