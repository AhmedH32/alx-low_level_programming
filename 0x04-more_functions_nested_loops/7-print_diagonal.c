#include "main.h"

/**
 * print_diagonal - prints a diagonal
 * @n: number of / to print
 *
 * Return: 0 always
 */
void print_diagonal(int n)
{
	int i, x;

	for (i = 0; i < n; i++)
	{
		for (x = 0; x < i; x++)
			putchar(' ');

		putchar(92);
		putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
