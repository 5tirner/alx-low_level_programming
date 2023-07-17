#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Null if fial and pointer of dog_t othw
 */

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new->name = name;
	new->age = age;
	new->owner = owner;
	return (new);
}
