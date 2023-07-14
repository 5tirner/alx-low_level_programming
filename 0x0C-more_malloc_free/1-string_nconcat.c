#include "main.h"

/**
 * slen - count len s
 * @s: str
 *
 * Return: len
 */

int	slen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * string_nconcat - join two strings until n
 * @s1: str1
 * @s2: str2
 * @n: unsigned int
 *
 * Return: pointer
 */

char	*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;
	char		*str;

	str = malloc(slen(s1) + n + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
