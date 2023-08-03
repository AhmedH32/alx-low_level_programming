#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 0, j = 1, k, tmp;

	for (k = 0; k < 52; k++)
	{	
		if (k < 51)
			printf("%lu, ", i);
		else
			printf("%lu\n", i);
		tmp = j;
		j = i + j;
		i = tmp;

	}

	return (0);
}
