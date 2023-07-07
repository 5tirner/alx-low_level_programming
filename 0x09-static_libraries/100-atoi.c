#include "main.h"

/**
 * _atoi - ascii to integer
 * @s: string to convert it
 *
 * Return: the integer from s
 */

int	_atoi(char *s)
{
	unsigned int	res;
	int		sign;
	int		i;
	int		res2;

	i = 0;
	res = 0;
	sign = 1;
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while ((s[i]) && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + s[i] - 48;
		i++;
	}
	res2 = res * sign;
	return (res2);
}
