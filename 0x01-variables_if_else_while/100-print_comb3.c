#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i, j = 48, n = 0;

	for (i = 48; i < 58;)
	{
		putchar(j);
		putchar(i);

		if (i == 57)
		{
			j++;
			n++;
			i = 48 + n;
		}

		i++;

		if (i < 57 || j < 57)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
