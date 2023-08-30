#include "main.h"

/**
 * _puts_recursion - puts a string recursivily
 * @s: the pointer to said string
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}
