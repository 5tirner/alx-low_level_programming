#include "main.h"

/**
 * _abs - get the positive value of n.
 * @n: the integer that i want to get it's abs.
 *
 * Return: the positive value of n.
 */

int	_abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
