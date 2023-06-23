#include "main.h"

/**
 * print_triangle - print # as a triangle
 * @size: until reach this
 *
 * Return: Nothing.
 */

void	print_triangle(int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j < size - 1)
		{
			write(1, " ", 1);
			j++;
		}
		j = 0;
		while (j < i + 1)
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
