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
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: nil\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (d->age)
	{
		printf("Age: %.6f\n", d->age);
	}
	else
	{
		printf("Age: nil");
	}

	if (d->owner == NULL)
	{
		printf("Owner: nil");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
