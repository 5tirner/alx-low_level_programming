#include "main.h"

/**
 * _strcat - concatinate src with dest
 * @src: the soutce
 * @dest: destination
 *
 * Return: always dest
 */

char	*_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
