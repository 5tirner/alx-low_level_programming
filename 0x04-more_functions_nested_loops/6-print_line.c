#include "main.h"

/**
 * print_line - print _ until reach n
 * @n: len og the line.
 *
 * Return: nothing.
 */

void	print_line(int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
