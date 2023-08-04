#include "main.h"

/**
 * clear_bit - set value of a bit by index to 0
 * @n: number
 * @index: the index
 *
 * Return: 1 or -1
 */

int	clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
