#include "main.h"

/**
 * get_bit - get the bit that matches the index
 * @n: an the number
 * @index: the index
 *
 * Return: value of the bit at index or -1 if an error occured
 */

int	get_bit(unsigned long int n, unsigned int index)
{
	return ((n & (1 >> (index - 1))) << (index - 1));
}
