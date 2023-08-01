#include "main.h"

/**
 * print_to_98 - prints all no to 98
 *@n: first input
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i = 0;

	if (n <= 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
