#include "main.h"

/**
 * pchr - print char
 * @c: char
 *
 * Return: nothing
 */

void	pchr(char c)
{
	write(1, &c, 1);
}

/**
 * pnbr - print nbr
 * @n: number to print
 *
 * Return: nothhing
 */

void	pnbr(long n)
{
	if (n >= 0 && n <= 9)
		pchr(n + 48);
	else if (n < 0)
	{
		pchr('-');
		pnbr(n * -1);
	}
	else
	{
		pnbr(n / 10);
		pnbr(n % 10);
	}
}

/**
 * first - first sum
 * @arr: a
 * @size: s
 *
 * Return: nothing
 */

void	first(int *a, int s, int *d, int *b, long *c)
{
	long	t1;
	int	i;
	int	j;

	t1 = 0;
	i = 0;
	j = 0;
	while (i < s * s)
	{
		if (j == 0)
			t1 += (long)a[i];
		if (j == s)
			j = -1;
		j++;
		i++;
	}
	pnbr(t1);
	write(1, ", ", 2);
	*d = -1;
	*b = 0;
	*c = 0;
}

/**
 * print_diagsums - print from corner to corner
 * @a: array
 * @size: deli
 *
 * Return: nothing
 */

void	print_diagsums(int *a, int size)
{
	int	arr[size][size];
	long	t1;
	int	i;
	int	j;
	int	k;

	first(a, size, &i, &k, &t1);
	while (++i < size)
	{
		j = -1;
		while (++j < size)
		{
			arr[i][j] = a[k];
			k++;
		}
	}
	i = -1;
	j = size - 1;
	while (++i < size)
	{
		t1 += (long)arr[i][j];
		j--;
	}
	pnbr(t1);
	write(1, "\n", 1);
}
