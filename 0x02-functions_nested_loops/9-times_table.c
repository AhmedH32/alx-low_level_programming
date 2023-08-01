#include "main.h"
#include <limits.h>

/**
 * times_table - prints all 9 times tables
 *
 * Return: void
 */
void times_table(void)
{
	int i, r, n;

	for (r = 0; r < 10; r++)
	{
		for (i = 0; i < 10; i++)
		{
			if (i < 10 && i != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			n = i * r;
			if (n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);

			}
			else if (n != 0 || i != 0)
			{
				_putchar(' ');
				_putchar(n + 48);
			}
			else
				_putchar(n + 48);

			if (i == 9)
				_putchar('\n');
		}
	}


}
