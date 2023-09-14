#include "calc.h"

/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mul two numbers
 * @a: first number
 * @b: second number
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: exit with 100 if b = 100 otherwise a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - mods two numbers
 * @a: first number
 * @b: second number
 * Return: exit 100 if b = 0 otherwise (a % b)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}
	return (a % b);
}
