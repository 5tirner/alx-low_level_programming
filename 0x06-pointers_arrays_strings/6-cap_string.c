#include "main.h"

/**
 * op - find a char
 * @str: string
 * @c: char
 *
 * Return: 1 if found c 0 if not
 */

int	op(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - cpitalize
 * @s: string
 *
 * Return: pointer to char
 */

char	*cap_string(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
	i = 0;
	while (s[i])
	{
		while (s[i] && op(" ,;.!?(){}\n\t\"", s[i]))
			i++;
		if (s[i])
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
			while (s[i] && !op(" ,;.!?(){}\n\t\"", s[i]))
				i++;
		}
	}
	return (s);
}
