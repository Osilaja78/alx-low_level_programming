#include "dog.h"
#include <stdlib.h>

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
	dog_t *dog_new = malloc(sizeof(dog_t));

	if (dog_new == NULL)
		return (NULL);

	len1 = len2 = 0;

	while (name[len1])
		len1++;

	while (owner[len2])
		len2++;

	dog_new->name = malloc(sizeof(dog_new->name) * len1);
	dog_new->owner = malloc(sizeof(dog_new->owner) * len2);

	if (dog_new->name == NULL || dog_new->owner == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		dog_new->name[i] = name[i];

	dog_new->age = age;

	for (j = 0; j < len2; j++)
		dog_new->owner[j] = owner[j];

	return (dog_new);
}
