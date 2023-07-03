#include "main.h"

/**
 * _memset - set b in s until n
 * @s: string
 * @b: char to set it
 * @n: unsigned int
 *
 * Return: s
 */

char	*_memset(char *s, char b, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
