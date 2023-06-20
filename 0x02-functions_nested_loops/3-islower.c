#include "main.h"

/**
 * _islower : ceck if c is lowercase
 * @c: the integer that i want to check
 *
 * Return: Returns 1 if c is lowercase, Returns 0 otherwise.
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
