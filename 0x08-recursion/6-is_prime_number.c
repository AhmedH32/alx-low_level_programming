#include "main.h"

/**
 * actual_prime - the actual fnction responsible for prime checking
 * @n: the number to check
 * @j: counter
 * Return: 0 if not prime 1 if prime
 */
int actual_prime(int n, int j)
{
	if (j < n)
	{
		if (n % j == 0)
			return (0);
		else
			return (actual_prime(n, j + 1));
	}
	if (n == j)
		return (1);
	else
		return (0);
}
/**
 * is_prime_number - set up function to check if prime
 * @n: number to check
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, 2));
}
