#include "main.h"

/**
 * c_w - count words
 * @s: string
 *
 * Return: integer
 */

int	c_w(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == ' ')
			i++;
		if (s[i])
		{
			while (s[i] && s[i] != ' ')
				i++;
			j++;
		}
	}
	return (j);
}

/**
 * len - len of str
 * @s: string
 *
 * Return: integer
 */

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != ' ')
		i++;
	return (i);
}

/**
 * toalloc - to allocat s
 * @str: a string
 *
 * Return: NULL or address for s
 */

char	**toalloc(char *str)
{
	char	**s;

	if (!str || !*str)
		return (NULL);
	s = (char **) malloc(sizeof(char *) * c_w(str) + 1);
	if (!s)
		return (NULL);
	return (s);
}

/**
 * do_free - free s
 * @s: to free
 * @i: until it
 *
 * Return: NULL
 */

char	**do_free(char **s, int i)
{
	while (i >= 0)
		free(s[i--]);
	free(s);
	return (NULL);
}

/**
 * strtow - split string
 * @str: string to split
 *
 * Return: 2D string
 */

char	**strtow(char *str)
{
	char	**s;
	int	i;
	int	j;
	int	k;

	s = toalloc(str);
	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	while (str[k])
	{
		while (str[k] && str[k] == ' ')
			k++;
		if (str[k])
		{
			s[i] = malloc(len(&str[k]) + 1);
			if (!s[i])
				return (do_free(s, i));
			j = 0;
			while (str[k] && str[k] != ' ')
				s[i][j++] = str[k++];
			s[i][j] = '\0';
		}
		i++;
	}
	s[i] = NULL;
	return (s);
}
