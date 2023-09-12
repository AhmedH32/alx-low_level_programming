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
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %d\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
