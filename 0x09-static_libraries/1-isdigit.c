#include "main.h"

/**
 * _isdigit - check if c is a digit.
 * @c: the char that i want check it.
 *
 * Return: if isdigit 1 else 0.
 */

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
