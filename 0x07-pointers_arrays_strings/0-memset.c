#include "main.h"

/**
 * _memset - set b in s
 * @b: char to set it
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
