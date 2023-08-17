#include "main.h"

/**
 * _strlen - returns the size of a string
 * @s: input string
 *
 * Return: integer = to size of string
 */
int _strlen(char *s)
{
	int length = 0, i;

	while (*(s + i) != '\0')
	{
		length++;
		i++;
	}
	return (length);

}
