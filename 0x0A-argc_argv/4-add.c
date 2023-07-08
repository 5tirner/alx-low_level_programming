#include "main.h"

/**
 * main - the start
 * @ac: nb of args
 * @av: content of args
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int	i;
	int	t;
	int	j;
	
	i = 0;
	t = 0;
	while (++i < ac)
	{
		j = 0;
		if (av[i][j] && av[i][j] == '+')
			j = 1;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
				j++;
		}
		t += atoi(av[i]);
	}
	printf("%d\n", t);
	return (0);
}
