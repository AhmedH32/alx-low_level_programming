#include "main.h"

/**
* _atoi - prints out numbers
* @s: pointer to string
* Return: 0
*/
int _atoi(char *s)
{
	short ngtv = 1;
	unsigned int num = 0, i = 0;
	int finalnum = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			num = (num * 10) + (*(s + i) - 48);
			if (!(*(s + i + 1) >= 48 && *(s + i + 1) <= 57))
				break;
		}
		if (*(s + i) == '-')
			ngtv *= -1;
			i++;
	}
	if (ngtv == -1)
		finalnum = num * ngtv;
	else
		finalnum = num;
	return (finalnum);
}

/**
* main - entry point
* @argc: number of inputs
* @argv: the inputs
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = 0, j = 0, sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += _atoi(argv[i]);

	}
	if (argc != 1)
		printf("%d\n", sum);

	return (0);
}
