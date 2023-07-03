#include "main.h"

/**
 * print_chessboard - print board
 * @a: 2d array 'chessboard'
 *
 * Return: Nothing
 */

void	print_chessboard(char (*a)[8])
{
	int	i;
	int	j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			write(1, &a[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
