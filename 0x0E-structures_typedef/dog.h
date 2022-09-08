#ifndef MAIN_H
#define MAIN_H


/**
 * struct dog - structure of a dog
 * @name: dog member
 * @owner: dog member
 * @age: dog member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
