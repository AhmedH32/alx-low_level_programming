#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the instance of struct dog
 * @d: pointer to dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
