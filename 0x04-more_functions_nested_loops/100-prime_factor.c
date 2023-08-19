#include "main.h"
#include <math.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	long n = 612852475143, i, maxp;

	while (n % 2 == 0)
	{
		n /= 2;
		maxp = 2;
	}
	while (n % 3 == 0)
	{
		n /= 3;
		maxp = 3;
	}
	for (i = 5; i < sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			n /= i;
			maxp = i;
		}
	}
	if (n > 4)
	{
		maxp = n;
	}
	printf("%ld\n", maxp);

	return (0);
}
