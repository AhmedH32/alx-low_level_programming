#include "main.h"

/**
 * factorial - returns factorial of number
 * @n: the number
 * Return: int of factorial
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n == 0)
		return (1);
	else
		return (-1);

}
