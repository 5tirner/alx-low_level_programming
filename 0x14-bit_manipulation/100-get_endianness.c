#include "main.h"

/**
 * get_endianness - check for the type of data storage
 *
 * Return: 0 if big endian, 1 if little endian
 */

int	get_endianness(void)
{
	unsigned int	checker;
	char		*compare;

	checker = 0x76543210;
	compare = (char *)&checker;
	if (*compare == 0x10)
		return (1);
	return (0);
}
