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
		free(d);
	}
	d->name = _strdup(name);
	if (d->name == NULL)
	{
		return (NULL);
		free(d->name);
		free(d);
	}
	d->age = age;
	d->owner = _strdup(owner);
	if (d->owner == NULL)
	{
		return (NULL);
		free(d->owner);
		free(d);
	}
	return (d);
	free(d);
}

/**
* _strdup - returns a pointer to a newly allocated space in memory.
* @str: Size of string.
* Return: Return string.
*/
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc(n + 1 * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for ( ; i < n; i++)
		s[i] = str[i];
	return (s);
}
