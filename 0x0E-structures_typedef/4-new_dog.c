#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - strdup C function
 * @str: string to duplicate
 * Return: str
 */
char *_strdup(char *str)
{
	int i, n = 0;
	char *strcopy;

	if (str == NULL)
		return (NULL);
	do {
		n++;
	} while (str[n - 1]);
	strcopy = malloc(sizeof(char) * n);
	if (strcopy == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		strcopy[i] = str[i];
	}

	return (strcopy);
}
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
	d->name = _strdup(name);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
