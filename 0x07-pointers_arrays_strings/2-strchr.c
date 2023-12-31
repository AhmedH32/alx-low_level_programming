#include "main.h"

/**
 * _strchr - returns a pointer to first occurance of char
 * @s: pointer to string
 * @c: character to find
 * Return: pointer to location of c
 */
char *_strchr(char *s, char c)
{
	int i = 0, found = -1;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			found = i;
			break;
		}
		i++;
	}
	if (c == '\0')
		found = i;
	if (found == -1)
		return (NULL);
	else
		return (s + i);

}
