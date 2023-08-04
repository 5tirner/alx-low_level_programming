#include "main.h"

/**
 * print_binary - print the binary pf a number
 * @n: the number
 *
 * Return: NoThing
 */

void	print_binary(unsigned long int n)
{
	int			r;
	unsigned long int	max;
	unsigned long int	i;

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
			r = 1;
			n -= i;
		}
		else if (r == 1)
			write(1, "0", 1);
		max /= 2;
	}
	n += 48;
	write(1, &n, 1);
}
