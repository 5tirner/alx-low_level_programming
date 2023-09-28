#include "main.h"

/**
 * flip_bits - turn number into another one
 * @n: number to turn it
 * @m: number to have it
 *
 * Return: nbr of bits taht i need to flip to convert n to m.
 */

unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int	check;
	unsigned long int	bits;

	check = n ^ m;
	bits = 0;
	while (1)
	{
		bits += check & 1;
		check >>= 1;
		if (!check)
			break;
	}
	return (bits);
}
