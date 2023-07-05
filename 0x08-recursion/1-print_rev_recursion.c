#include "main.h"

/**
 * _print_rev_recursion - rev str with rec
 * @s: string to reverse
 *
 * Return: nothing
 */

void	_print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		write(1, s, 1);
	}
}
