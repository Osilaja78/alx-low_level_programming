#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Entry point.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: creates a new dog.
 *
 * Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	name ? new_dog->name = strdup(name) : NULL;
	new_dog->age = age;
	owner ? new_dog->owner = strdup(owner) : NULL;

	return (new_dog);
}
