#include "lists.h"

/**
 * print_listint - print a list that contain integers
 * @h: the linkedlist
 *
 * Return: Number of elements in the list
 */

size_t	print_listint(const listint_t *h)
{
	size_t	i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
