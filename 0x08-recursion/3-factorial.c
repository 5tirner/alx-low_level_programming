#include "main.h"

/**
 * factorial - factorial of n
 * @n: integer
 *
 * Return: integer
 */

int	factorial(int n)
{
	int	res;

	res = 1;
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		res = n * factorial(n - 1);
	return (res);
}
