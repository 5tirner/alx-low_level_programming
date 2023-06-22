#include "main.h"

/**
 * print_square - print square size
 * @size: how my square look.
 *
 * Return: Nothing.
 */

void	print_square(int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			write(1, "#", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (size <= 0)
		write(1, "\n", 1);
}
