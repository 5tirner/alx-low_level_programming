#include "lists.h"

/**
 * add_node_end - add back
 * @head: list
 * @str: the value of the node
 *
 * Return: Address of the new element
 */

list_t	*add_node_end(list_t **head, const char *str)
{
	int	i;
	list_t	*ptr;
	list_t	*save;

	save = *head;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	if (!ptr->str)
	{
		ptr->len = 0;
		return (NULL);
	}
	i = 0;
	while (str[i])
		i++;
	ptr->len = i;
	ptr->next = NULL;
	if (!*head)
		*head = ptr;
	else
	{
		while (*head)
			*head = (*head)->next;
		(*head)->next = ptr;
		*head = save;
	}
	return (*head);
}
