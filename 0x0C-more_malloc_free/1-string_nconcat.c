#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: n bytes of s2 to concatenate
 * Return: NULL if it fails pointer to memory otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *str;

	if (s1 != NULL)
	{
		while (s1[len1])
			len1++;
	}
	if (s2 != NULL)
	{
		while (s2[len2])
			len2++;
	}
	if (n >= len2)
		n = len2;
	str = malloc(sizeof(*str) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';

	return (str);
}
