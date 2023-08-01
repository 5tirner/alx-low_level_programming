#include "lists.h"

/**
 * pop_listint - delete the head of a list
 * @head: list
 *
 * Return: the data of the new head;
 */

int	pop_listint(listint_t **head)
{
	listint_t	*ptr;
	int		n;

	n = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (n);
}
