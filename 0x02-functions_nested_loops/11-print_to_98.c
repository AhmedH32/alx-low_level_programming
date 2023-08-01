#include "main.h"

/**
 * print_to_98 - prints all no to 98
 *@n: first input
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (i < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else
	{
		for (i = n; i > 97; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
}
