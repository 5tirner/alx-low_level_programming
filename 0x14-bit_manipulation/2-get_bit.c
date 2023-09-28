#include "main.h"

/**
 * get_bit - check the value of a bit by the index
 * @n: number
 * @index: the index of the bit
 *
 * Return: value of the bit or -1 in error case.
 */

int	get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & 1 << index)
		return (1);
	return (0);
}
