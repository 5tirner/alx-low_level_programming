#include "main.h"

/**
 * print_nbr - print any integer
 * @n: the integer that i want print it.
 *
 * Return: no return value.
 */

void	print_nbr(int n)
{
	if (n >= 0 && n < 10)
		_putchar(n + 48);
	else if (n < 0)
	{
		_putchar('-');
		print_nbr(n * -1);
	}
	else if (n >= 10)
	{
		print_nbr(n / 10);
		print_nbr(n % 10);
	}
}

/**
 * case_bigger - from n to 98
 * @n: from it
 *
 * Return: no return value.
 */

void	case_bigger(int n)
{
	int	i;

	i = 0;
	while (n >= 98)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		print_nbr(n);
		n--;
		i++;
	}
}

void	case_smaller(int n)
{
	int	i;

	i = 0;
	while (n <= 98)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		print_nbr(n);
		n++;
		i++;
	}
}

/**
 * print_to_98 - print from anything to 98
 * @n: the elements that i will print from it.
 *
 * Return: no return value.
 */

void	print_to_98(int n)
{
	if (n > 98)
		case_bigger(n);
	else
		case_smaller(n);
	_putchar('\n');
}
