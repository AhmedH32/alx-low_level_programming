#include "main.h"

/**
 * _strchr - returns a pointer to first occurance of char
 * @s: pointer to string
 * @c: character to find
 * Return: pointer to location of c
 */
char *_strchr(char *s, char c)
{
	int i = 0, found;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = i;
			break;
		}
	}
	if (found)
		return (s + i);
	else
		return (NULL);

}
