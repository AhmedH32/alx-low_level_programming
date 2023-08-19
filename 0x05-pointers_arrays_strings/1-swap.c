#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: first input
 * @b: second input
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
