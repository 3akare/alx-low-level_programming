#include "dog.h"

/**
 * print_dog - prints out a struct dog
 * @d: a struct dog
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = strdup("Name: (nil)\n");
	if (!d->owner)
		d->owner = strdup("Owner: (nil)\n");

	printf("Name: %s\n", d->name);

	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("(nil)\n");

	printf("Owner: %s\n", d->owner);
}
