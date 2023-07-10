#include "main.h"

/**
 * alloc_grid - allocate to 2d int arr
 * @width: int 1
 * @height: int 2
 *
 * Return: ptr of ptr to int
 */

int	**alloc_grid(int width, int height)
{
	int	**arr;
	int	i;
	int	j;

	i = 0;
	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (!arr)
		return (NULL);
	while (i < height)
	{
		j = 0;
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
			return (NULL);
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
