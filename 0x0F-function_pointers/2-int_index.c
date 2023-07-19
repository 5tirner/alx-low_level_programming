#include "function_pointers.h"

/**
 * int_index - get the index when cmp not 0
 * @array: array to compare
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: -1 if fail, index of the element otw
 */

int	int_index(int *array, int size, int (*cmp)(int))
{
	int	i;

	if (!array || size <= 0 || !cmp)
		return (-1);
	i = 0;
	while (i < size)
	{
		if ((*cmp)(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
