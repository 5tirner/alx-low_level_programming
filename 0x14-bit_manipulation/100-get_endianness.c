#include "main.h"

/**
 * get_endianness - check the bits order
 *
 * Return: 0 if big and one if little.
 */

int	get_endianness(void)
{
	unsigned int	x;
	char			*c;

	x = 1;
	c = (char *)&x;
	return ((int)*c);
}
