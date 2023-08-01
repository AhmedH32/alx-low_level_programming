#include <stdio.h>

/* more headers goes there */

/**
* main - entry point
*
* Return: 0
*/
int main(void)
{
	int i, j, k, l;

	j = k = l = 48;

	for (i = 49; i < 58; i++)
	{
		putchar(l);
		putchar(k);
		putchar(' ');
		putchar(j);
		putchar(i);

		if (i  == 57 && j == 57 && k == 56 && l == 57)
		{
			break;
		}
		if (i < 57 || j < 57 || k < 57 || l < 57)
		{
			putchar(',');
			putchar(' ');
		}

		if (i == 57)
		{
			i = 47;
			j++;
		}
		if (j == 58)
		{
			k++;
			i = k;
			j = l;

			if (k == 57)
			{
				j = l + 1;
				i = 47;
			}
		}
		if (k == 58)
		{
			k = 48;
			i = 48;
			l++;
			j = l;
		}

	}

	putchar('\n');

	return (0);
}
