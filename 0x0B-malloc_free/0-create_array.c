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

	str = malloc(size + 1);
	if (!str || size == 0)
	{
		write(1, "failed to allocate memory\n", 26);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
