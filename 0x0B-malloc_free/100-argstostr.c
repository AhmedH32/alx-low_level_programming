#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: number of arg
 * @av: pointer to array of pointers to args
 * Return: NULL if fail pointer to str otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, len, j;
	char **str;

	if (!ac || av == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (ac - 1));
	for (i = 1; i <= ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
			j++;
		str[i - 1] = malloc(sizeof(char) * j + 1);
		j = 0;
		while (av[i][j] != '\0')
		{
			str[i - 1][j] = av[i][j];
			j++;
		}
		str[i - 1][j] = '\n';
	}
	return (str);
}
