#include "main.h"

/**
 * clear_bit - clear bit on the index
 * @n: the number
 * @index: index
 * Return: 1 if all is good -1 if index skip size of long uint.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}