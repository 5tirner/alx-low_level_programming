#include "main.h"

/**
 * len - count len of s
 * @s: string to count it's len
 *
 * Return: len of s
 */

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/**
 * print_rev - rev string
 * @s: string that i want reverse
 *
 * Return: nothing
 */

void	print_rev(char *s)
{
	int	i;

	i = len(s) - 1;
	while (i >= 0)
	{
		write(1, &s[i], 1);
		i--;
	}
	write(1, "\n", 1);
}
