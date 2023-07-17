#include "dog.h"

/**
 * print_dog - print contenet of strcut dog
 * @d: strcut
 *
 * Return: Nothing
 */

void	print_dog(struct dog *d)
{
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
