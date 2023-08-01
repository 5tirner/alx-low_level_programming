#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: the list
 *
 * Return: NoThing
 */

void	free_listint2(listint_t **head)
{
	listint_t	*ptr;

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = NULL;
		*head = ptr;
	}
	head = NULL;
}
