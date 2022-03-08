#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * *new_dog - Creates a new dog.
 * @name: Name of...
 * @age: Age of...
 * @owner: Owner of...
 * Return: Return new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
	free(d);
}
