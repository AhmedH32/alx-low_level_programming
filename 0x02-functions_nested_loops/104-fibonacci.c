#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 1, j = 2, k, tmp;

	for (k = 0; k < 98; k++)
	{
		if (k < 49)
			printf("%lu, ", i);
		else
			printf("%lu\n", i);
		tmp = j;
		j = i + j;
		i = tmp;
	}

	return (0);
}
