#include "dog.h"
/**
 * init_dog - intialize struct dog
 * @d: dog
 * @name: Name of...
 * @age: Age of...
 * @owner: Own of...
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
