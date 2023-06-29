#include "main.h"

/**
 * string_toupper - convert s to uppercase
 * @str: string
 *
 * Return: pointer to char
 */

char	*string_toupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
