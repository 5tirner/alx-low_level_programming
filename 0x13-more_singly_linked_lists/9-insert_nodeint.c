#include "lists.h"

/**
 * add_back - add back of a list
 * @head: list
 * @n: value
 *
 * Return: address of the new element, or NULL
 */

listint_t       *add_back(listint_t **head, const int n)
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

/**
 * the_root - get the linked list as first
 * @head: real linked list already modofied
 * @save: backup
 *
 * Return: Always NULL;
 */

listint_t	*the_root(listint_t **head, listint_t *save)
{
	*head = save;
	return (NULL);
}

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
	i = -1;
	new->n = n;
	save = *head;
	while (*head && ++i < idx)
		*head = (*head)->next;
	if (!*head && i == idx)
	{
		new->next = NULL;
		add_back(&save, new->n);
		*head = save;
		return (new);
	}
	if (!*head && i < idx)
		return (the_root(head, save));
	new->next = *head;
	ptr = NULL;
	i = -1;
	while (++i < idx)
	{
		add_back(&ptr, save->n);
		save = save->next;
	}
	save = new;
	while (save)
	{
		add_back(&ptr, save->n);
		save = save->next;
	}
	*head = ptr;
	return (new);
}
