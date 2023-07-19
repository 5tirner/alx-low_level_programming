#include "3-calc.h"
#include "function_pointers.h"

/**
 * check_op - check the operator
 * @op: av[2]
 *
 * Return: 0 or 2 if the operator is valid, 1 otw
 */

int	check_op(char *op)
{
	int	i;
	char	c;

	i = 0;
	while (op[i] && op[i] == ' ')
		i++;
	if (op[i] != '%' && op[i] != '/' && op[i] != '-'
		&& op[i] != '+' && op[i] != '*')
		return (1);
	c = op[i];
	i++;
	while (op[i] && op[i] == ' ')
		i++;
	if (op[i])
		return (1);
	if (c == '%' || c == '/')
		return (2);
	return (0);
}

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
	if (check_op(av[2]) == 1)
	{
		printf("Error\n");
		return (99);
	}
	if (atoi(av[3]) == 0 && check_op(av[2]) == 2)
	{
		printf("Error\n");
		return (100);
	}
	printf("%d\n", (*get_op_func(av[2]))(atoi(av[1]), atoi(av[3])));
	return (0);
}
