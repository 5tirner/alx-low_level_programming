#include "main.h"

/**
 * _strpbrk - get the matches
 * @s: string 1
 * @accept: string 2
 *
 * Return: Pointer to char or 0
 */

char	*_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
