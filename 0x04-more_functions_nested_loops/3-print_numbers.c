#include "main.h"

/**
 * print_numbers - prints numbers for 0 to 9
 *
 * Return: 0 always
*/
void print_numbers(void)
{
	int i, x;

	i = x = 0;
	for (i = 0; i < 10; i++)
	{
		_putchar(x + 48);
	}
	_putchar(\n);
}
