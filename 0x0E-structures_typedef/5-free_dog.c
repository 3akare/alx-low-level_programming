#include "dog.h"

/**
 * free_dog - frees a dog
 * @d: a dog structure
 */

void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
