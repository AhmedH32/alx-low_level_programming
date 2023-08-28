#include "main.h"

/**
 * _memset - sets number of bytes of array to value
 * @s: pointer to char array
 * @b: the char
 * @n: number of bytes
 * Return: pointer to array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
