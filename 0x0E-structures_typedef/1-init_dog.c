#include "dog.h"

/**
 * init_dog - initializes a variable of type dog
 * @d: pointer to struct dog
 * @name: the name
 * @age: age
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
