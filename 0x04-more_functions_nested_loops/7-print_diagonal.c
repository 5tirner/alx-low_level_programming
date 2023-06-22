#include "main.h"

/**
 * print_diagonal - print somthing until reach n
 * @n: until it.
 * Return: Nothing.
 */

void	print_diagonal(int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			write(1, " ", 1);
			j++;
		}
		write(1, "\\\n", 2);
		i++;
	}
	if (n <= 0)
		write(1, "\n", 1);
}
