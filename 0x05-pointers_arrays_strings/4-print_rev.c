#include "main.h"

/**
 * print_rev - rev string
 * @s: string that i want reverse
 *
 * Return: nothing
 */

void	print_rev(char *s)
{
	int	i;

	i = _strlen(s) - 1;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
}
