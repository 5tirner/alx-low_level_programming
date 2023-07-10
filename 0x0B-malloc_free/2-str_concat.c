#include "main.h"

/**
 * len - calcul len of s
 * @s: string
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
 * join - join two str
 * @s1: s1
 * @s2: s2
 * @s: string wanted
 *
 * Return: string
 */

char	*join(char *s, char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1 && s1[i])
	{
		s[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2 && s2[i])
	{
		s[j] = s2[i];
		i++;
		j++;
	}
	s[j] = '\0';
	return (s);
}

/**
 * str_concat - join two string
 * @s1: str1
 * @s2: str2
 *
 * Return: pointer to char
 */

char	*str_concat(char *s1, char *s2)
{
	char	*s;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		s = malloc(len(s2) + 1);
	if (!s2)
		s = malloc(len(s1) + 1);
	if (s1 && s2)
		s = malloc(len(s1) + len(s2) + 1);
	if (!s)
		return (NULL);
	s = join(s, s1, s2);
	return (s);
}
