#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int nf;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	nf = n % 10;

	if (nf == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, nf);
	}
	else if (nf > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, nf);
	}
	else if (nf < 6 && nf != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nf);
	}
	return (0);
}
