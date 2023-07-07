#include "main.h"

/**
 * main - all start from here
 * @ac: number of args start from 1
 * @av: content of each args start from 0
 *
 * Return: always 0
 */

int main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac)
	{
		while (av[0][i])
		{
			write(1, &av[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
