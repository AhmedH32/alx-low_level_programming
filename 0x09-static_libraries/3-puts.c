#include "main.h"

/**
 * _puts - this my version of puts
 * @str: input to print
 *
 * Return: 0;
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
