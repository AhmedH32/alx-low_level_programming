#include "main.h"

/**
 * _islower - checks whether input is lowercase
 * @c - input as int from 0 - 255
 *
 * Return: 1 if lowercase , 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
