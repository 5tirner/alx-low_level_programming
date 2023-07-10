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
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
			j++;
		t += j;
		printf("%d\n", j);
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

	t = s_size(ac, av);
	s = malloc(t + ac);
	if (!s)
		return (NULL);
	i = 0;
	t = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			s[t] = av[i][j];
			t++;
			j++;
		}
		s[t] = '\n';
		t++;
	}
	s[t] = '\0';
	return (s);
}
