#include "main.h"

/**
 * print_binary - uint to binary
 * @n: number to convert it
 *
 * Return: Nothing.
 */

void	print_binary(unsigned long n)
{
	unsigned long	base;
	int				r;

	base = 4611686018427387904;
	r = 0;
	if (n > 9223372036854775807)
	{
		r = 1;
		write(1, "1", 1);
		n -= 9223372036854775807;
		n -= 1;
	}
	while (base)
	{
		if (n >= base)
		{
			if (r == 0)
				r = 1;
			write(1, "1", 1);
			n -= base;
		}
		else if (n < base && r == 1)
			write(1, "0", 1);
		base /= 2;
	}
	if (r == 0)
		write(1, "0", 1);
}
