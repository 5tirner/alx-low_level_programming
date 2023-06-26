#include "main.h"

/**
 * puts_half - print half of s
 * @s: pointer to char
 *
 * Return: nothing
 */

void	puts_half(char *s)
{
	int	i;

	i = _strlen(s) - 1;
	if (i % 2)
		i--;
	i /= 2;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
