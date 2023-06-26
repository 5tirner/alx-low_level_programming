#include "main.h"

/**
 * len - count len
 * @s: count it's len
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
 * rev_string - revers a string
 * @s: string to modified on it
 *
 * Return: no return;
 */

void	rev_string(char *s)
{
	int	l;
	int	i;
	char	swap;

	i = 0;
	l = len(s) - 1;

	while (i < l)
	{
		swap = s[i];
		s[i] = s[l];
		s[l] = swap;
		i++;
		l--;
	}
}
