#ifndef DOG_H
#define DOG_H

#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct dog - a structure for a dog
 * @name: name of the dog
 * @owner: the name of the owner
 * @age: the age of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
