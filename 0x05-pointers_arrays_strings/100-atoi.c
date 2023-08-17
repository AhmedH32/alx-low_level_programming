#include "main.h"

/**
 * _atoi - prints out numbers
 * @s: pointer to string
 * Return: 0
 */
int _atoi(char *s)
{
	short ngtv = 1;
	int num = 0, i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			num = (num * 10) + (*(s + i) - 48);		
		}
		if ( *(s + i) == '-')
			ngtv *= -1;
	}
	num *= ngtv;
	return (num);
}
