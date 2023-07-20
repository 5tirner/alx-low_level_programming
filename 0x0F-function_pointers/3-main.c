#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - start
 * @ac: number of args
 * @av: content of args
 *
 * Return: 0 if success, other val if fail
 */

int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (av[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((av[2][0] == '/' || av[2][0] == '%')
		&& atoi(av[3]) == 0)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", (*get_op_func(av[2]))(atoi(av[1]), atoi(av[3])));
	return (0);
}
