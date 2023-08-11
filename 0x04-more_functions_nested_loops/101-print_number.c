#include "main.h"

/**
 * print_number - prints an integer
 *@n: integer to be printed
 * Return: 0
 */
void print_number(int n)
{
	_putchar((n % 10) + 48);

	while (n > 10)
	{
		n /= 10;
		_putchar((n % 10) + 48);
	}
	_putchar('\n');
}
