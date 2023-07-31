#include "lists.h"

/**
 * listint_len - get len of a list
 * @h: the linkedlist
 *
 * Return: Number of elements in the list
 */

size_t	listint_len(const listint_t *h)
{
	size_t	i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
