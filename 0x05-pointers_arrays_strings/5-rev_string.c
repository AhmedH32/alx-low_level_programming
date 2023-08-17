#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0, tmp, j;

	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i / 2; j++)
	{
		tmp = *(s + j);
		*(s + j) = *(s + (i - j));
		*(s + (i - j)) = tmp;
	}

}
