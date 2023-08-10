#include "main.h"

/**
 * print_numbers - prints numbers for 0 to 9
 *
 * Return: 0 always
*/
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + 48);
	}
	_putchar('\n');
}
