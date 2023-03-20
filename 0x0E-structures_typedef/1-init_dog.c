#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: initializes a variable of type struct dog.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
