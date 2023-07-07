#include "main.h"

/**
 * _strncat - concatinate src with dest until n
 * @src: the soutce
 * @dest: destination
 * @n: concatenate until it
 *
 * Return: always dest
 */

char	*_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
