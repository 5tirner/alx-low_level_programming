#include "variadic_functions.h"

/*
 * print_strings - print the all strings
 * @separator: sparing strts
 * @n: number of the strings
 *
 * Return: nothing
 */

void	print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int	i;
	va_list		p;

	i = 0;
	va_start(p, n);
	while (i < n)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		printf("%s", va_arg(p, char *));
		i++;
	}
	va_end(p);
	printf("\n");
}
