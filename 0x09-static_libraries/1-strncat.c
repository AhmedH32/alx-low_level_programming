#include "main.h"

/**
 * *_strncat - appends n elements from a second string to a first
 * @dest: pointer to string dest
 * @src: pointer to original string
 * @n: number of elements
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = j = k = 0;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
		j++;
	if (n > j)
		n = j;
	for (; k < n; k++)
	{
		*(dest + i) = *(src + k);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
