#include "main.h"

/**
 * _strcpy - put the src on dest
 * @dest: copy to
 * @src: copy from
 *
 * Return: pointer to char
 */

char	*_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
