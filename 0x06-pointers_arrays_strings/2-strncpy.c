#include "main.h"

/**
 * _strncpy - copy src on dest until n
 * @src: source
 * @dest: destination
 * @n: until it
 *
 * Return: Dest
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
