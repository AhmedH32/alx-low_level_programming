#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of input arguments
 * @argv: pointer to array containing input strings
 * Return: 98 if argc != 4 99 if op is wrong the output otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*ops)(int, int);

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	
	if (argv[2][1] != '\0')
	{
		printf("ERROR\n");
		exit(99);
	}

	ops = get_op_func(argv[2]);
	if (ops == NULL)
	{
		printf("ERROR\n");
		exit(99);
	}
	printf("%d\n", ops(num1, num2));
	return (0);
}
