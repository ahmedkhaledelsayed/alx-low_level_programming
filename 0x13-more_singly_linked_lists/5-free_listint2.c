#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head != NULL)
	{
		temp2 = *head;
		while (temp2 != NULL)
		{
			temp = temp2;
			temp2 = temp2->next;
			free(temp);
		}
		*head = NULL;
	}
}
