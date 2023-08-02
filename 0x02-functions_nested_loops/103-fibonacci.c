#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 0, j = 1, sum = 0, tmp;

	while (i < 4000000)
	{
		if (i % 2 == 0)
			sum += i;
		tmp = j;
		j = i + j;
		i = tmp;

	}
	printf("%lu\n", sum);

	return (0);
}
