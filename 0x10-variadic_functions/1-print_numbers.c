#include "variadic_functions.h"

/**
 * print_numbers - print all parameters
 * @separator - string to separing the params
 * @n: number of params
 *
 * Return: NoThings
 */

void	print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list		p;
	unsigned int	i;

	va_start(p, n);
	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			if (separator)
				printf("%s", separator);
		}
		printf("%d", va_arg(p, int));
		i++;
	}
	printf("\n");
}
