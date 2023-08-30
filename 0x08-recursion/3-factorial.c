#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: the number
 * Return: int of factorial
 */
int factorial(int n)
{
	if (n)
		return (n * factorial(n - 1));
	else
		return (1);
}
