#include <stdio.h>

/* more headers goes there */

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int j = 48, i = 49, k, n = 0, m = 0, l = 0;

	for (k = 50; k < 58; k++)
	{
		putchar(j);
		putchar(i);
		putchar(k);

		if (j != 55 || i != 56 || k != 57)
		{
			putchar(',');
			putchar(' ');
		}

		if (k == 57)
		{
			i++;
			m++;
			k = 49 + m;
		}

		if (i == 57)
		{
			j++;
			n++;
			i = 49 + n;
			k = 50 + l;
			m = 1 + l;
			l++;
		}
}

putchar('\n');

	return (0);
}
