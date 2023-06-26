#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: string to convert it
 *
 * Return: the integer from s
 */

int	_atoi(char *s)
{
	int	res;
	int	sign;
	int	i;

	i = 0;
	res = 0;
	sign = 1;
	while ((s[i]) && (s[i] >= '0' && s[i] <= '0'))
		i++;
	printf("%s\n", &s[i]);
	return (0);
}

