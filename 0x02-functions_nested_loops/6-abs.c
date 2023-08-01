#include "main.h"

/**
 * print_sign - determines abs value of input
 * @n: input to be decided
 *
 * Return: absolute value of input
 */
int print_sign(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
