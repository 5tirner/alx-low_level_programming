#include "main.h"

/**
 * cap_string - cpitalize
 * @s: string
 *
 * Return: pointer to char
 */

char	*cap_string(char *s)
{
	int	i;
	int	j;
	i = 0;
	while (s[i])
	{
		while ((s[i]) && (s[i] == '\n'
			|| s[i] == '\t' || s[i] == ' '))
			i++;

	}
}
