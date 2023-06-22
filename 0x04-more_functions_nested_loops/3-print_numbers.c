#include "main.h"

/**
 * print_numbers - print from 0 to 9
 *
 * Return: no return value.
 */

void	print_numbers(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 10)
	{
		if (i < 10)
			j = i + 48;
		else
			j = '\n';
		write(1, &j, 1);
		i++;
	}
}
