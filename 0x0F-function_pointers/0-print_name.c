#include "function_pointers.h"

/**
 * print_name - function that prints a name in many different ways
 * @name: pointer to the name
 * @f: pointer to name printing fn
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
