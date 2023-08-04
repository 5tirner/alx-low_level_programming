#include "main.h"

/**
 * print_binary - print the binary pf a number
 * @n: the number
 *
 * Return: NoThing
 */

void	print_binary(unsigned long int n)
{
	unsigned long int	max;
	unsigned long int	i;
	int			r;

	max = ULLONG_MAX;
	r = 0;
	while (max != 0)
	{
		i = max;
		if (i < ULLONG_MAX)
			i++;
		if (n >= i)
		{
			write(1, "1", 1);
			n -= i;
			r = 1;
		}
		else if (n < max && r == 1)
			write(1, "0", 1);
		max /= 2;
	}
	if (n == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}
