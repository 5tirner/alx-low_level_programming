#include "main.h"

/**
 * _strspn - calcul len of the initial substr
 * @s: string1
 * @accept: string2
 *
 * Return: len of the initial substring
 */

unsigned int	_strspn(char *s, char *accept)
{
	unsigned int	len;
	int		i;
	int		j;

	len = 0;
	i = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (!accept[j])
			break;
		i++;
	}
	return (len);
}
