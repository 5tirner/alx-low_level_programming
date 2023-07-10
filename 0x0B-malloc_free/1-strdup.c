#include "main.h"

/**
 * _strdup - create a copy
 * @str: to create a copy
 *
 * Return: copy from str
 */

char	*_strdup(char *str)
{
	char	*s;
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
		i++;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
