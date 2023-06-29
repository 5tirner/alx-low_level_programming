#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array
 * @n: size of it
 *
 * Return: nothing
 */

void	reverse_array(int *a, int n)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = n - 1;
	while (j > i)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		i++;
		j--;
	}
}
