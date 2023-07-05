#include "main.h"

/**
 * _puts_recursion - impl puts func with recursion
 * @s: string to print
 *
 * Return: nothing
 */

void	_puts_recursion(char *s)
{
	if (*s == '\0')
	{
		write(1, "\n", 1);
		return;
	}
	write(1, s, 1);
	s++;
	_puts_recursion(s);
}
