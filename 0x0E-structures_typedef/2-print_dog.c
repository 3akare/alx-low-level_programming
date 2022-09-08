#include "dog.h"

/**
 * print_dog - prints out a struct dog
 * @d: a struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = strdup("(nil)");
	if (d->owner == NULL)
		d->owner = strdup("(nil)");

	printf("Name: %s\n", d->name);

	if (d->age > 0)
		printf("Age: %f\n", d->age);
	else
		printf("(nil)\n");

	printf("Owner: %s\n", d->owner);
}
