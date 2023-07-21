#include "variadic_functions.h"

/**
 * ps - print_str
 * @s: string
 *
 * Return: nothing
 */

void	ps(char *s)
{
	if (!s)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - more like printf
 * @format: format
 *
 * Return: nothing
 */

void	print_all(const char *format, ...)
{
	int	i;
	va_list	p;
	int	r;

	i = 0;
	va_start(p, format);
	r = 0;
	while (format && format[i])
	{
		if (i != 0 && r == 1)
			printf(", ");
		r = 0;
		switch (format[i])
		{
			case 's':
				r = 1;
				ps(va_arg(p, char *));
				break;
			case 'c':
				r = 1;
				printf("%c", va_arg(p, int));
				break;
			case 'f':
				r = 1;
				printf("%f", va_arg(p, double));
				break;
			case 'i':
				r = 1;
				printf("%d", va_arg(p, int));
				break;
		}
		i++;
	}
	va_end(p);
	printf("\n");
}
