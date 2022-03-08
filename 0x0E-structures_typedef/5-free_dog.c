#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dogs
 * @d: Pointer to struct.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
