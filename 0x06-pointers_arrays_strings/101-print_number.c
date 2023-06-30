#include "main.h"

/**
 * print_number - print any ineger.
 * @n: the integer.
 *
 * Return: Nothing.
 */

void	print_number(int n)
{
	if (n >= 0 && n < 10)
		_putchar(n + 48);
	else if (n >= 10)
	{
		print_number(n / 10);
		print_number(n % 10);
	}
	else if (n < 0 && n != -2147483648)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else
		write(1, "-2147483648", 11);
}
