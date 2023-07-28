#include <stdio.h>
/* more headers goes there */

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char chr = 97;
	int i = 0;

	for (i = 0; i < 26; i++)
	{
		if (chr == 113 || chr == 101)
		{
			chr++;

			continue;
		}
		putchar(chr);

		chr++;
	}

	putchar('\n');

	return (0);
}
