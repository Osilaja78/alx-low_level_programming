#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Entry point.
 * @d: dog struct
 *
 * Description: prints a struct dog.
 *
 * Return: nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
