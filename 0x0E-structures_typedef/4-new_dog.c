#include "dog.h"

/**
 * dup_str - duplicate str
 * @str: string
 *
 * Return: NULL or address
 */

char	*dup_str(char *str)
{
	int	i;
	char	*s;

	i = 0;
	while (str[i])
		i++;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

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
	char	*na;
	char	*ow;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	na = dup_str(name);
	ow = dup_str(owner);
	if (!na || !ow)
	{
		free(new);
		return (NULL);
	}
	new->name = na;
	new->age = age;
	new->owner = ow;
	return (new);
}
