#include "main.h"
#include <limits.h>

/**
 * jack_bauer - prints all possible times
 *
 * Return: void
 */
void jack_bauer(void)
{
	char i, j, k, l;

	i = j = k = l = 0;

	while (1)
	{
		_putchar(l + 48);
		_putchar(k + 48);
		_putchar(':');
		_putchar(j + 48);
		_putchar(i + 48);
		_putchar('\n');

		i++;

		if (i == 10)
		{
			j++;
			i = 0;
		}
		if (j == 6)
		{
			k++;
			j = 0;
		}
		if (k == 10)
		{
			l++;
			k = 0;

			if (k == 4 && l == 2)
				l++;
		}
		if (l == 3)
			break;
	}
}
