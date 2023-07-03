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
 * fill - fill 2D array
 * @arr: arr
 * @size: size
 *
 * Return: pointer of poiter to int
 */

int	**fill(int *arr, int size)
{
	int	**matrix;
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	matrix = (int **)malloc(sizeof(int *) * size);
	while (i < size)
	{
		j = 0;
		matrix[i] = malloc(sizeof(int) * size);
		while (j < size)
		{
			matrix[i][j] = arr[k];
			j++;
			k++;
		}
		i++;
	}
	return (matrix);
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
	int	**arr;
	int	i;
	int	j;
	long	total1;
	long	total2;

	i = -1;
	j = 0;
	total1 = 0;
	total2 = 0;
	arr = fill(a, size);
	while (++i < size)
	{
		total1 += (long)arr[i][j];
		j++;
	}
	i = -1;
	j = size - 1;
	while (++i < size)
	{
		total2 += (long)arr[i][j];
		j--;
	}
	printf("%ld, %ld\n", total1, total2);
}
