#include "main.h"

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: Binary Number.
 *
 * Return: the number or NULL if SMTW.
 */

unsigned int	binary_to_uint(const char *b)
{
	int				i;
	unsigned long	until;
	unsigned int	number;

	i = 0;
	if (!b || !b[i])
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	until = 1;
	number = 0;
	while (b[--i])
	{
		if (b[i] == '1')
			number += until;
		until *= 2;
	}
	return (number);
}
