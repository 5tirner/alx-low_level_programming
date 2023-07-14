#include "main.h"

/**
 * malloc_checked - to allocate b size
 * @b: unsigned int
 *
 * Return: pointer
 */

void	*malloc_checked(unsigned int b)
{
	void	*pointer;

	pointer = malloc(b);
	if (!pointer)
		exit(98);
	return (pointer);
}
