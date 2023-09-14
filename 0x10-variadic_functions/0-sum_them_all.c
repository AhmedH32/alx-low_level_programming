#include "variadic_functions.h"

/**
 * sum_them_all - sums a variable number of inputs
 * @n: no of inputs
 * Return: 0 if n = 0 sum otherwise
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);
}
