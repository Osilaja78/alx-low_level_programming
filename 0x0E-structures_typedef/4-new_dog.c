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
	int len1, len2, i, j;
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	len1 = len2 = 0;

	while (name[len1])
		len1++;

	while (owner[len2])
		len2++;

	new_dog->name = malloc(sizeof(new_dog->name) * len1);
	new_dog->owner = malloc(sizeof(new_dog->owner) * len2);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i <= len1; i++)
		new_dog->name[i] = name[i];

	new_dog->age = age;

	for (j = 0; j <= len2; j++)
		new_dog->owner[j] = owner[j];

	return (new_dog);
}
