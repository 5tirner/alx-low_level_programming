#include "main.h"

/**
 * print_binary - print the binary pf a number
 * @n: the number
 *
 * Return: NoThing
 */

void	print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_pc((n & 1) + 48);
}
