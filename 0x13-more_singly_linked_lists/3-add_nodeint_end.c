#include "lists.h"

/**
 * add_nodeint_end - add back of a list
 * @head: list
 * @n: value
 *
 * Return: address of the new element, or NULL
 */

listint_t	*add_nodeint_end(listint_t **head, const int n)
{
	listint_t	*new;
	listint_t	*ptr;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
		*head = new;
	else
	{
		ptr = *head;
		while ((*head)->next)
			*head = (*head)->next;
		(*head)->next = new;
		*head = ptr;
	}
	return (*head);
}
