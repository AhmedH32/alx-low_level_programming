#include "main.h"

/**
 * print_alphabet_x10 - prints the alphapet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(i + 97);
		}
		_putchar('\n');
	}
}
