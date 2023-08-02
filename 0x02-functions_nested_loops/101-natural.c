#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
