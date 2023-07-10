#include "main.h"

/**
 * create_array - create an array and fill it
 * @size: size of the array
 * @c: the char
 *
 * Return: a pointer to char
 */

char	*create_array(unsigned int size, char c)
{
	char		*str;
	unsigned int	i;

	if (size == 0)
		return (NULL);
	str = malloc(size);
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
