#include "main.h"

/**
* the_actual_sqrt - is the actual fnc
* @n: the number
* @j: the current number we ate
* Return: the answer
*/
int the_actual_sqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	else if (j * j == n)
		return (j);
	else
		return (the_actual_sqrt(n, j + 1));
}
/**
* _sqrt_recursion - retunns natural sqrt of n but is a decoy
* @n: the number
* Return: int
*/
int _sqrt_recursion(int n)
{
	return (the_actual_sqrt(n, 0));
}
