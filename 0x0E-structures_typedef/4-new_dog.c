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

	if (!name)
		return (NULL);
	if (!age)
		return (NULL);
	if (!owner)
		return (NULL);

	tessie = malloc(sizeof(dog_t));
	if (!tessie)
		return (NULL);
	tessie->name = name;
	tessie->age = age;
	tessie->owner = owner;

	return (tessie);
}
