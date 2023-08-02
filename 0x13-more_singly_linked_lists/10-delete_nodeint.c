#include "lists.h"

/**
 * delete_nodeint_at_index - free the node that match the index
 * @head: the list
 * @index: the index
 *
 * Return: 1 if good -1 if not good
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t	*ptr;
	listint_t	*copy;
	unsigned int	i;

	copy = *head;
	i = 0;
	if (!copy)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	while (i <= index && copy)
	{
		if (i == index - 1)
		{
			ptr = copy->next;
			copy->next = ptr->next;
			free(ptr);
			return (1);
		}
		copy = copy->next;
		i++;
	}
	return (-1);
}
