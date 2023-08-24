#include "main.h"

/**
 * string_toupper - changes all lowercase letter to upper
 * @n: pinter to string in question
 * Return: the string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] <= 122 && n[i] >= 97)
			n[i] -= 32;
		i++;
	}
	return (n);
}
