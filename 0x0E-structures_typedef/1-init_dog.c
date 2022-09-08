#include "old.h"

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: structure
 * @name: a string
 * @age: a float
 * @owner: a string
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
}

