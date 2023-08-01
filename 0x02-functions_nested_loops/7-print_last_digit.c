#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: input to be decided
 *
 * Return: last digit of input
 */
int print_last_digit(int n)
{
	int lst = n % 10;

	_putchar(lst);
	return (lst);
}
