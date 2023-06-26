#include "main.h"

/**
 * puts2 - print the evens
 * @s: to print it's even index
 * 
 * Return: nothing
 */

void	puts2(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (i % 2 == 0)
			write(1, &s[i], 1);
		i++;
	}
}
