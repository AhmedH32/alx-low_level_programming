#include "main.h"

/**
 * *_strcat - appends two strings
 * @dest: pointer to destination string
 * @src: pointer to src string
 * Return: pointer to char string
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = j = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
		j++;

	for (k = 0; k < j; k++)
	{
		*(dest + i) = *(src + k);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
