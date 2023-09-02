#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to
* make change for an amount of money
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])
{
	int nmbr, i, res;
	int cns[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nmbr = atoi(argv[1]);
	res = 0;

	if (nmbr < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && nmbr >= 0; i++)
	{
		while (nmbr >= cns[i])
		{
			res++;
			nmbr -= cns[i];
		}
	}

	printf("%d\n", res);
	return (0);
}

