#include "main.h"

/**
 * _isalpha - check if c is a letter.
 * @c: integer that i want check it
 * Return: Returns 1 if c is alpha , Returns 0 otherwise
 */

int	_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
