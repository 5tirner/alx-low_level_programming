#include "main.h"

/**
 * print_table - print all elements of the tab
 * @arr: the table that i want to print it
 *
 * Return: no return value.
 */

void	print_table(int arr[10][10])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
		{
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (arr[i][j] < 10)
					_putchar(' ');
			}
			if (arr[i][j] < 10)
				_putchar(arr[i][j] + 48);
			else
			{
				_putchar(arr[i][j] / 10 + 48);
				_putchar(arr[i][j] % 10 + 48);
			}
		}
		_putchar('\n');
	}
}

/**
 * times_table - increment with all numbers 0 to 9
 *
 * Return: no return value.
 */

void	times_table(void)
{
	int	arr[10][10];
	int	i;
	int	j;
	int	t;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		t = 0;
		while (++j < 10)
		{
			arr[i][j] = t;
			t += i;
		}
	}
	print_table(arr);
}
