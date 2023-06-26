#include "main.h"

/**
 * _puts - print string
 * @s: the string i want print it
 *
 * Return: Nothing
 */

void	_puts(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
