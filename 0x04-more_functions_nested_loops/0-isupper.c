#include "main.h"

/**
 * _isupper - checks for if input is uppercase
 * @c: the input to be checked
 *
 * Return: 1 if uppercase 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
