#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0, j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = i / 2 + 1; j < i + 1; j++)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}
