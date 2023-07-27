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

	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = (char *)str;
	ptr->next = *head;
	(*head) = ptr;
	return (ptr);
}
