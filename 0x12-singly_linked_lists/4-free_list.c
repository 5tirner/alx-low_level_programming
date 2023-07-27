#include "lists.h"

/**
 * free_list - free a linked list
 * @head: the linked list
 *
 * Return: Nothing
 */

void	free_list(list_t *head)
{
	list_t	*save;

	while (head)
	{
		save = head->next;
		free(head->str);
		free(head);
		head = save;
	}
}
