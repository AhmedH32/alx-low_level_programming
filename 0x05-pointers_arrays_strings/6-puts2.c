#include "main.h"

/**
 * puts2 - prints every other letter
 * @str: input string
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;

		if (*(str + i) == '\0')
			break;
		i++;
	}
	_putchar('\n');

}
