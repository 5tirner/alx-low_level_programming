#include "main.h"

/**
 * set_bit - set val in bit by index
 * @n: the number
 * @index: the index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int	set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * sizeof(unsigned long int *))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
