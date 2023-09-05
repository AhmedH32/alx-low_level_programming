#include "main.h"

/**
 * str_concat - concatenates two strings and returns appointed mem with both
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure else returns pointer to  memory
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, j, k;
	char *str;

	if (s1 != NULL)
		while (s1[size1] != '\0')
			size1++;
	if (s2 != NULL)
		while (s2[size2] != '\0')
			size2++;
	str = malloc(sizeof(char) * (size1 + size2) + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < size1; j++)
		str[j] = s1[j];
	for (k = 0; k < size2; k++)
		str[size1 + k] = s2[k];
	str[size1 + size2] = '\0';
	return (str);
}
