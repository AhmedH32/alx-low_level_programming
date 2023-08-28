#include "main.h"

/**
* _strpbrk - pointer to first char from accept to appear
* @s: pointer to string to search
* @accept: charset
* Return: pointer to unsigned int
*/
char *_strpbrk(char *s, char *accept);
{
	int i = 0, j = 0, k, l, found = 0;

	while (s[i] != '\0')
		i++;
	while (accept[j] != '\0')
		j++;
	for (k = 0; k < i; k++)
	{
		found = 0;
		for (l = 0; l < j; l++)
		{
			if (s[k] == accept[l])
			{
				found = 1;
				break;
			}
		}
		if (found)
			break;
	}
	if (found)
		return (s + k);
	else
		return (NULL);
}
