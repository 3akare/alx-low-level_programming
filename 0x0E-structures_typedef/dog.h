#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */

struct dog
{
        char *name;
        float age;
        char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */

Typedef struct dog dog_t;

#endif
