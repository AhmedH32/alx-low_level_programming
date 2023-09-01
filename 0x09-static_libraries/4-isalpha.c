#include "main.h"

/**
 * _isalpha - checks whether input is alphabet
 * @c: input as int from 0 - 255
 *
 * Return: 1 if alphapet , 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
