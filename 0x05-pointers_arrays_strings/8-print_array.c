#include "main.h"

/**
 * pchar - print char
 * @c: the char
 *
 * Return: nothing
 */

void	pchar(char c)
{
	write(1, &c, 1);
}
/**
 * nbr - print number
 * @n: number that i want print it
 *
 * Return: nothing
 */

void	nbr(int	n)
{
	if (n >= 0 && n < 10)
		pchar(n + 48);
	else if (n < 0)
	{
		write(1, "-", 1);
		nbr(n * -1);
	}
	else
	{
		nbr(n / 10);
		nbr(n % 10);
	}
}
/**
 * print_array - print array of ints
 * @a: array
 * @n: until this n
 * Return: nothing
 */

void	print_array(int *a, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			write(1, ", ", 2);
		nbr(a[i]);
		i++;
	}
	write(1, "\n", 1);
}
