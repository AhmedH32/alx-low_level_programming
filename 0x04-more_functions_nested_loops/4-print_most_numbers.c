#include "main.h"

/**
 * print_most_numbers - pritns numb from 0 to 9
 *
 * Return: 0 always
*/
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 2 || x == 4)
			continue;
		_putchar(x + 48);
	}
	_putchar('\n');
}
