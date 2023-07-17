#include "dog.h"

/**
 * free_dog - free dog
 * @d: strcut dog_t
 *
 * Return: Nothing
 */

void	free_dog(dog_t *d)
{
	if (d)
		free(d);
}
