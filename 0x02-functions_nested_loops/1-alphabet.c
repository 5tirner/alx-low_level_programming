#include <stdio.h>

/**
 * print_alphabet - print lower_alpha
 *
 * Return: no return value.
 */

void	print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
