#include "main.h"

/**
 * _putchar - print a char
 * @c - char to print
 *
 * Return: no return value.
 */

void	_putchar(char c)
{
	write(1, &c, 1);
}

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
 * main - the start
 * @ac: nb of args
 * @av: content of args
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	av = NULL;
	print_nbr(ac - 1);
	_putchar('\n');
	return (0);
}
