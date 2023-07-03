#include "main.h"

/**
 * _strstr - search for needle
 * @haystack: string1
 * @needle: string2
 *
 * Return: pointer to char or 0
 */

char	*_strstr(char *haystack, char *needle)
{
	int	i;
	int	j;

	i = 0;
	if (!needle || !needle[0])
		return (haystack);
	while (haystack[i])
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j]
			&& haystack[i + j] == needle[j])
				j++;
			if (!needle[j])
				return (haystack + i);
		}
		i++;
	}
	return (0);
}
