#include "main.h"
#include <limits.h>

/**
 * print_last_digit - prints last digit
 * @n: input to be decided
 *
 * Return: last digit of input
 */
int print_last_digit(int n)
{
	int lst;

	if (n < 0)
	{
		n *= -1;
	}
	if (n == INT_MIN)
		n = 8;
	lst = (n % 10) + 48;

	_putchar(lst);
	return (n % 10);
}
