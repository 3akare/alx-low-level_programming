#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age; age of the new dog
 * @owner: owner of the new dog's name
 *
 * Return: a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 ||owner == NULL)
		return (NULL);
	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
		return (NULL);
	else
	{
		free(poppy->name);
		free(poppy);
		return (NULL);
	}
	poppy->name = strcpy(poppy->name, name);
	poppy->age = age;
	poppy->owner = strcpy(poppy->owner, owner);

	return (poppy);
}
