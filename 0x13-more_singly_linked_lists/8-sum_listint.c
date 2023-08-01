#include "lists.h"

/**
 * sum_listint - calcul the sum of all list->val
 * @head: list
 *
 * Return: returns the sum of all the data head->n
 */

int	sum_listint(listint_t *head)
{
	int	total;

	total = 0;
	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
