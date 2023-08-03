#include "main.h"
#include <limits.h>

/**
 * print_times_table - prints n times table starting with 0
 * @n: max number for table
 */
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i < n + 1; i++)
	{
		if (n < 0 || n > 15)
			break;
		for (j = 0; j < n + 1; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + 48);
			}
			else if (k < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + 48);
			}
			else if (k < 100)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + 48);
				_putchar((k % 10) + 48);
			}
			else
			{
				_putchar(' ');
				_putchar((k / 100) + 48);
				_putchar(((k / 10) % 10) + 48);
				_putchar((k % 10) + 48);
			}
			if (j != n)
				_putchar(',');
			else
				_putchar('\n');
		}
	}
}
