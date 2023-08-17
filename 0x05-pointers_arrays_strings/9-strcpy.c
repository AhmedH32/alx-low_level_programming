#include "main.h"

/**
 * _strcpy - copies one string to another
 * @src: source string
 * @dest: dest string
 * Return: poitner to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = *(src + i);
	return (dest);


}
