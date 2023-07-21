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
	char		*buf;

	i = 0;
	va_start(p, n);
	while (i < n)
	{
		if (i != 0 && separator)
			printf("%s", separator);
		buf = va_arg(p, char *);
		if (buf)
			printf("%s", buf);
		else
			printf("(nil)");
		i++;
	}
	va_end(p);
	printf("\n");
}
