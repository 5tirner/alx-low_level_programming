#include "main.h"

/**
 * _calloc - recode for calloc function
 * @nmemb: count
 * @size: size to allocate
 *
 * Return: an address
 */

void	*_calloc(unsigned int nmemb, unsigned int size)
{
	void		*address;
	char		*s;
	unsigned long	i;

	if (!nmemb || !size)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	address = malloc(nmemb * size);
	if (!address)
		return (NULL);
	s = (char *)address;
	i = 0;
	while (i < nmemb * size)
	{
		s[i] = 0;
		i++;
	}
	return (address);
}
