#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first one
 * @s2: second
 *
 * Return: difference between the two
 */

int	_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
