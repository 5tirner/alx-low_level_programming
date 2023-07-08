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
	int	j;

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
