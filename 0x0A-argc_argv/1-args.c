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
	write(1, av[0], 0);
	printf("%d\n", ac - 1);
	return (0);
}
