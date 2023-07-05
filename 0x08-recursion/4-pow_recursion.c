#include "main.h"

/**
 * _pow_recursion - power of x
 * @x: int1
 * @y: int2
 *
 * Return: power of x
 */

int	_pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (_pow_recursion(x, y - 1) * x);
}
