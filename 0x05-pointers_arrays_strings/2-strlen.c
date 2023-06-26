#include "main.h"

/**
 * _strlen - count len of str
 *
 * @s: str to count it's len
 * Return: len of a string
 */

int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
