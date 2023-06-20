#include "main.h"

/**
 * print_alphabet_x10 - print all the lower alpha ten times
 *
 * Return: no return value.
 */

void	print_alphabet_x10(void)
{
	int	i;
	int	c;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			putchar(c);
			c++;
		}
		putchar('\n');
		i++;
	}
}
