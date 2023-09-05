#include "main.h"

/**
 * _strdup - return a pointer to a duplicate string
 * @str: the string to be duplicated
 * Return: NULL if str = 0 or if fail due to insuf memory
 */
char *_strdup(char *str)
{
	int size = 0, j;
	char *str2;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;
	str2 = malloc(sizeof(char) * size + 1);

	if (str2 == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		str2[j] = str[j];
	str2[size] = '\0';

	return (str2);
}
