#include "main.h"

/**
 * print_sign - check the sign of n.
 * @n: integer that i want check it.
 *
 * Return: Returns 1 if n positive, Returns 0 if n is zero, Returns -1 otherwise.
 */

int	print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	_putchar('-');
	return (-1);
}
