#include "main.h"

/**
 * coins - coins number
 * @n: money amount
 *
 * Return: the number of coins
 */

int	coins(int n)
{
	int	coins;
	int	total;

	total = 0;
	while (n > 0)
	{
		coins = 25;
		if (coins > n)
			coins -= 15;
		if (coins > n)
			coins -= 5;
		if (coins > n)
			coins -= 3;
		if (coins > n)
			coins -= 1;
		n -= coins;
		total++;
	}
	return (total);
}

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

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = 0;
	if (av[1][i] == '+')
		i++;
	while (av[1][i])
	{
		if (av[1][i] < '0' || av[1][i] > '9')
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", coins(atoi(av[1])));
	return (0);
}
