#include "main.h"

/**
 * binary_to_uint - convert binary number to unsigned int
 * @b: a string to covert it to unsigned int
 *
 * Return: the converted number, or 0 if there is an error
 */

unsigned int	binary_to_uint(const char *b)
{
	int		i;
	unsigned int	uint;
	unsigned int	toadd;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;
	uint = 0;
	toadd = 1;
	while (i >= 0)
	{
		if (b[i] == '1')
			uint += toadd;
		i--;
		toadd *= 2;
	}
	return (uint);
}
