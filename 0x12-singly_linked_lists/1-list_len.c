#include "lists.h"

/**
 * list_len - clacul len of a list
 * @h: the list
 *
 * Return: len of the list
 */

size_t	list_len(const list_t *h)
{
	size_t	i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
