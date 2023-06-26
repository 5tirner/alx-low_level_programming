#include "main.h"

/**
 * len - count len
 * @s: is s
 *
 * Return: len
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
 * puts_half - print half of s
 * @s: pointer to char
 *
 * Return: nothing
 */

void	puts_half(char *s)
{
	int	i;

	i = len(s) - 1;
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
