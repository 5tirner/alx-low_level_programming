#include "variadic_functions.h"

/**
 * sum_them_all - sum of the all parameters
 * @n: represent number of the parameters
 *
 * Return: sum of the all parameters
 */

int	sum_them_all(const unsigned int n, ...)
{
	va_list		p;
	int		total;
	unsigned int	i;

	total = 0;
	va_start(p, n);
	i = 0;
	while (i < n)
	{
		total += va_arg(p, int);
		i++;
	}
	va_end(p);
	return (total);
}
