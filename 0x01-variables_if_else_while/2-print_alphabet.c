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
		putchar(chr);
		putchar('\n');

		chr++;
	}

	return (0);
}
