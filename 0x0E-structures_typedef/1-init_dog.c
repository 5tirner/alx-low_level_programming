#include "dog.h"

/**
 * init_dog - initialize valeus in struct elements
 * @d: struct
 * @name: string
 * @age: float
 * @owner: string
 *
 * Return: NoThing
 */

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
