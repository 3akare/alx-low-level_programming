#include "main.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: The new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
        dog_t *doggo;

        if (name == NULL || age < 0 || owner == NULL)
                return (NULL);

        doggo = malloc(sizeof(dog_t));
        if (doggo == NULL)
                return (NULL);

        {
                free(doggo->name);
                free(doggo);
                return (NULL);
        }

        doggo->name = _strcopy(doggo->name, name);
        doggo->age = age;
        doggo->owner = _strcopy(doggo->owner, owner);

        return (doggo);
}
