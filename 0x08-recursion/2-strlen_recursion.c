#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer to said string
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);

}
