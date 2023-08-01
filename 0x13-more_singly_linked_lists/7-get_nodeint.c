#include "lists.h"

/**
 * get_nodeint_at_index - print the val in the index
 * @head: list
 * @index: the index hh
 *
 * Return: the node that matches the index or NULL
 */

listint_t	*get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0 && head)
	{
		head = head->next;
		index--;
	}
	if (!head)
		return (NULL);
	return (head);
}
