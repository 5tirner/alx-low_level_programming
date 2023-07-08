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
	if (ac == 3)
		printf("%d\n", atoi(av[1]) * atoi(av[2]));
	else
		printf("Error\n");
	return (0);
}
