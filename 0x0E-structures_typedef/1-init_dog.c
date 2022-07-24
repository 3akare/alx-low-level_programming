#include "dog.h"
#include "stdlib.h"
#include "stddef.h"
/**
 * init_dog - initializes a variable of type "struct"
 * @d: structure of a dog
 * @name: dog name
 * @age: dog age
 * @owner: the dog owner's name
 *
 * Return: Always Successfully
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
