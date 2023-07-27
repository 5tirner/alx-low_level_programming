#include "lists.h"

/**
 * add_node - add in the front
 * @head: the list
 * @str: value
 *
 * Return: the list with a node in it's fornt
 */

list_t	*add_node(list_t **head, const char *str)
{
	list_t	*ptr;
	int	i;

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	if (!str)
	{
		ptr->str = NULL;
		ptr->len = 0;
	}
	else
	{
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
	}
	ptr->next = *head;
	(*head) = ptr;
	return (ptr);
}
