#include "function_pointers.h"

/**
 * print_name - print a str by apply a func on it
 * @name: string to print
 * @f: function to apply it on the name
 *
 * Return: Nothing
 */

void	print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	(*f)(name);
}
