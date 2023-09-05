#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: number of arg
 * @av: pointer to array of pointers to args
 * Return: NULL if fail pointer to str otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, len, j, k = 0;
	char *str;

	if (!ac || av == NULL)
		return (NULL);
	for (i = 0; i <= ac; i++)
	{
		j = 0;
		while (ac[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	str = malloc(sizeof(char) * len + ac);
	for (i = 0; i <= ac; i++)
	{
		j = 0;
		while (ac[i][j] != '\0')
		{
			str[k] = ac[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}
