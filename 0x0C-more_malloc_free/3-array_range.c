#include "main.h"

/**
 * array_range - ft_range
 * @min: the min munber
 * @max: the max number
 *
 * Return: an array with avlues from min to max
 */

int	*array_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min > max)
		return (NULL);
	arr = malloc(4 * (max - min));
	if (!arr)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
