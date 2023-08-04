#include "main.h"

/**
 * flip_bits - flip number of bits to get a number
 * @n: the old numbr
 * @m: number that we want to get it
 *
 * Return: number of flips for bits to get m
 */

unsigned int	flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int	checker;
	unsigned int	bitstoflip;

	checker = n ^ m;
	bitstoflip = 0;
	while (checker > 0)
	{
		bitstoflip += (checker & 1);
		checker >>= 1;
	}
	return (bitstoflip);
}
