#include "main.h"

/**
 * free_grid - free a 2D array
 * @grid: to freed
 * @height: integer
 *
 * Return: nothing
 */

void	free_grid(int **grid, int height)
{
	int	i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
