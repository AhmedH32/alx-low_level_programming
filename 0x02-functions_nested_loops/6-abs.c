#include "main.h"

/**
 * _abs - determines abs value of input
 * @n: input to be decided
 *
 * Return: absolute value of input
 */
int _abs(int n)
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
