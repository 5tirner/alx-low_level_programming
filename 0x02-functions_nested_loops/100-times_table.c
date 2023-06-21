#include "main.h"
# define N 16
/**
 * print_nbr - print any integer
 * @n: the integer that i want print it.
 *
 * Return: no return value.
 */

void	print_nbr(int n)
{
	if (n >= 0 && n < 10)
		_putchar(n + 48);
	else if (n < 0)
	{
		_putchar('-');
		print_nbr(n * -1);
	}
	else if (n >= 10)
	{
		print_nbr(n / 10);
		print_nbr(n % 10);
	}
}

/**
 * print_spaces - print the spaces and ,.
 * @n: number to check it
 *
 * Return: no return value.
 */

void	print_spaces(int n)
{
	_putchar(',');
	_putchar(' ');
	if (n < 100)
		_putchar(' ');
	if (n < 10)
		_putchar(' ');
}

/**
 * print_times_table - increment with all numbers 0 to n
 * @n: times
 *
 * Return: no return value.
 */

void	print_times_table(int n)
{
	int	arr[n + 1][n + 1];
	int	i;
	int	j;
	int	t;

	i = -1;
	if (n < 0 || n > 15)
		return ;
	while (++i < n + 1)
	{
		j = -1;
		t = 0;
		while (++j < n + 1)
		{
			arr[i][j] = t;
			t += i;
			if (j != 0)
				print_spaces(arr[i][j]);
			print_nbr(arr[i][j]);
		}
		_putchar('\n');
	}
}
