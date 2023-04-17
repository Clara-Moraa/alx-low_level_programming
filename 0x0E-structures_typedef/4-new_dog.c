#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tessie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	tessie = malloc(sizeof(dog_t));
	if (tessie == NULL)
		return (NULL);

	tessie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (tessie->name == NULL)
	{
		free(tessie);
		return (NULL);
	}

	tessie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (tessie->owner == NULL)
	{
		free(tessie->name);
		free(tessie);
		return (NULL);
	}

	tessie->name = _strcpy(tessie->name, name);
	tessie->age = age;
	tessie->owner = _strcopy(tessie->owner, owner);

	return (tessie);
}

