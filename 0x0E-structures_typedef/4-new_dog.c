#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - gets length of str
 * @str: string
 * Return: the length of the string not accounting for terminating byte
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
/**
 * _strcpy - copies one string into another
 * @str1: the target str
 * @str2: the origin str
 * @len: the length of str2
 * Return: pointer to str1
 */
char *_strcpy(char *str1, char *str2, int len)
{
	int i = 0;

	for (i = 0; i <= len; i++)
		str1[i] = str2[i];
	return (str1);
}



/**
 * new_dog - creates a new dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 * Return: returns pointer to new instance of dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *newdog = malloc(sizeof(dog_t));

	if (newdog == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);


	newdog->name = malloc(sizeof(char) * len1 + 1);
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * len2 + 1);
	if (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	newdog->name = _strcpy(newdog->name, name, len1);
	newdog->owner = _strcpy(newdog->owner, owner, len2);
	newdog->age = age;
	return (newdog);
}
