#include "main.h"

/**
 * _strlen_recursion - len of a str with rec
 * @s: string to calcul it's len
 *
 * Return: len of s
 */

int	_strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
