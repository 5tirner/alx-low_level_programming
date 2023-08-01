#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: the list
 *
 * Return: NoThing
 */

void	free_listint(listint_t *head)
{
	listint_t	*ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
