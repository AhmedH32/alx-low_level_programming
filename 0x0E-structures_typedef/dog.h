#ifndef DOG_H
#define DOG_H

/**
 * struct dog - this is the struct for a dog
 * @name: its name
 * @age: its age
 * @owner: read
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
