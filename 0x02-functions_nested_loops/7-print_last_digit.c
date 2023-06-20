#include <main.h>

/**
 * print_last_digit - print the last digit in a number.
 * @n: the number that i want it's last digit.
 *
 * Return: value of the last digit.
 */

int	print_last_digit(int n)
{
	int	save;

	save = n % 10;
	_putchar(save + 48);
	return (save);
}
