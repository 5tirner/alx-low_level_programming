#include "main.h"

/**
 * leet - leet code
 * @s: string
 *
 * Return: pointer to char
 */
#include <stdio.h>
char	*leet(char *s)
{
	int	i;
	int	j;
	char	a[9] = "OL\\EA\\\\T";
	char	b[9] = "ol\\ea\\\\t";

	i = 0;
	while (s[i])
	{
		j = 0;
		while (a[j])
		{
			if (a[j] == s[i] || b[j] == s[i])
				s[i] = j + '0';
			j++;
		}
		i++;
	}
	return (s);

}
