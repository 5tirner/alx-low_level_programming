#include "main.h"

/**
 * _isupper - check if c is uppercase.
 * @c: the char that i want check it.
 *
 * Return: if isupper 1 else 0.
 */

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
