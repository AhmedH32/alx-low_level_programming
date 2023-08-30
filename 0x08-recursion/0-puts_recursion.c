#include "main.h"

/**
 * _puts_recursion - puts a string recursivily
 * @s: the pointer to said string
 * Return: void
 */
void _puts_recursion(char *s)
{
	putchar(*s);

	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
		_puts_recursion(s + 1);
}
