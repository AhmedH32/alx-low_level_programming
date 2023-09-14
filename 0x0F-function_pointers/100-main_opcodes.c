#include <stdio.h>
#include <stdlib.h>


/**
 * main - a function that points to its own main fnc and prints its op code
 * @argc: the number of arguments 
 * @argv: the arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (j = 0; j < i; j++)
	{
		printf("%02hhx", arr[j]);
		if (j != i - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
