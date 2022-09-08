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
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	if (d->age >= 0)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (!d->owner)
		prinf("Owner: (nil)");
	else
		printf("Owner: %s\n", d->owner);

}
