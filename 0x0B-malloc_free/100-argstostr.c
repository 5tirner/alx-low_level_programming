#include "main.h"

/**
 * s_size - calcul size of s
 * @ac: args number
 * @av: args
 *
 * Return: integer
 */

int	s_size(int ac, char **av)
{
	int	i;
	int	t;
	int	j;

	t = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		t += j;
		i++;
	}
	return (t);
}

/**
 * argstostr - join args
 * @ac: argc
 * @av: argv
 *
 * Return: string
 */

char	*argstostr(int ac, char **av)
{
	char	*s;
	int	i;
	int	j;
	int	t;

	if (ac == 0 || !av)
		return (NULL);
	s = malloc(s_size(ac, av) + ac + 1);
	if (!s)
		return (NULL);
	i = -1;
	t = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
		{
			s[t] = av[i][j];
			t++;
		}
		s[t] = '\n';
		t++;
	}
	s[t] = '\0';
	return (s);
}
