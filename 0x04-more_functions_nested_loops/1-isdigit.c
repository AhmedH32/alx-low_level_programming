#include "main.h"

/**
 * _isdigit - checks if digit
 * @c: the digit to be checked
 *
 * Return: 1 if digit 0 otherwis
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);

}
