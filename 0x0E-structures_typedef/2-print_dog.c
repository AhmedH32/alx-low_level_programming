#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a dog
 * @d: pointer to struct of type dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (0);
	if (d->name == NULL)
		printf("Name: (nil)");
	else
		printf("Name: %s", d->name);
	if (d->age == NULL)
		printf("Age: (nil)");
	else
		printf("Age: %d", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)");
	else
		printf("Owner: %s", d->owner);

}
