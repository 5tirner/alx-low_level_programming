#include "main.h"

/**
 * strchr - search for a char
 * @s: string
 * @c: char to search for it
 *
 * Return: NULL or an address if found c 
 */

char	*_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
