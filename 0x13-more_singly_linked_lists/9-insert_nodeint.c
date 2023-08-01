#include "lists.h"

/**
 * insert_nodeint_at_index - set node in the exact index
 * @head: list
 * @idx: index
 * @n: value
 *
 * Return: address of the new node, or NULL
 */

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t	*new;
	listint_t	*save;
	listint_t	*ptr;
	unsigned int	i;

	if (!*head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	i = 0;
	new->n = n;
	save = *head;
	while (*head && i < idx)
	{
		*head = (*head)->next;
		i++;
	}
	if (!*head)
		return (NULL);
	new->next = *head;
	ptr = NULL;
	i = 0;
	while (i < idx)
	{
		add_nodeint_end(&ptr, save->n);
		save = save->next;
		i++;
	}
	save = new;
	while (save)
	{
		add_nodeint_end(&ptr, save->n);
		save = save->next;
	}
	*head = ptr;
	return (new);
}
