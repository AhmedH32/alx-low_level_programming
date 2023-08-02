#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	long long i = 0, j = 1, k, tmp;

	for (k = 0; k < 50; k++)
	{
		printf("%lli, ", i);
		tmp = j;
		j = i + j;
		i = tmp;

	}
	printf("\n");

	return (0);
}
