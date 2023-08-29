#include "main.h"

/**
 * set_string - sets the value of a pointer to chr
 * @s: double pointer pointing to address of the pointer we want to change
 * @to: the pointer to get the value
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
