#include "function_pointers.h"

/**
 * array_iterator - apply the action
 * @array: array of integers
 * @size: siez of array
 * @action: unction to applay on all elements of array
 *
 * Return: NoThing
 */

void	array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	i;

	if (!array || size <= 0 || !action)
		return;
	i = 0;
	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
