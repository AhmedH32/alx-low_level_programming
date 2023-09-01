#include "main.h"

/**
* _strncpy - copies a string
* @dest: destination string
* @src: source string
* @n: number of letters to copy
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int f;

	f = 0;
	while (f < n && *(src + f) != '\0')
	{
		*(dest + f) = *(src + f);
		f++;
	}
	while (f < n)
	{
		dest[f] = '\0';
		f++;
	}

	return (dest);

}
