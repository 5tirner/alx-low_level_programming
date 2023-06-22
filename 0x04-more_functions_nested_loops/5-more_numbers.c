#include "main.h"

/**
 * more_numbers - from 0 to 14 ten time
 *
 * Return: no return value.
 */

void	more_numbers(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
				_putchar(j / 10 + 48);
			_putchar(j % 10 + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
