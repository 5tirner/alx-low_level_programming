#include "main.h"

/**
 * set_bet - set 1 into a bit
 * @n: the number
 * @index: the index to set on it
 *
 * Return: 1 if all is good and -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n ^= 1 << index;
	return (1);
}