#ifndef DOG_H
#define DOG_H

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

typedef struct dog dog_t;

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
