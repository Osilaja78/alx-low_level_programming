#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
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
	dog_t *dog_new;

	if (dog_new == NULL)
		return (NULL);

	if (name != NULL && owner != NULL)
	{
		len1 = _strlen(name) + 1;
		len2 = _strlen(owner) + 1;
		dog_new = malloc(sizeof(dog_t));

		dog_new->name = malloc(sizeof(char) * len1);
		dog_new->owner = malloc(sizeof(char) * len2);

		if (dog_new->name == NULL)
		{
			free(dog_new);
			return (NULL);
		}

		if (dog_new->owner == NULL)
		{
			free(dog_new->name);
			free(dog_new);
			return (NULL);
		}

		for (i = 0; i <= len1; i++)
			dog_new->name[i] = name[i];

		dog_new->age = age;

		for (j = 0; j <= len2; j++)
			dog_new->owner[j] = owner[j];
	}

	return (dog_new);
}

/**
 * _strlen - Find length of a string
 * @s: string to be counted
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}
