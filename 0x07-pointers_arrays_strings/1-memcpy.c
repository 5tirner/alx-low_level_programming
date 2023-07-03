#include "main.h"

/**
 * _memcpy - copy src at dest until n
 * @dest: destination
 * @src: source
 * @n: unsigned int
 *
 * Return: Dest
 */

char	*_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
