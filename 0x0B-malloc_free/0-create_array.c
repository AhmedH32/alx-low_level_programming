#include "main.h"

/**
 * create_array - creates an array of dynamic size and initializes it
 * @size: size of array
 * @c: the char
 * Return: NULL if size = 0 or if fail
 */
char *create_array(unsigned int size, char c)
{
	if (!size)
		return (NULL);

	char *chrarr;
	int i;

	chrarr = malloc(sizeof(char) * size);
	if (chrarr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		chrarr[i] = c;
	return (chrarr);
}
