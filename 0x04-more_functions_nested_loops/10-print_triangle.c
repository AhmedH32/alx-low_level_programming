#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of said trinalge
 *
 * Return: 0 always
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - (i + 1); j++)
				printf(" ");
			for (j = 0; j < i + 1; j++)
				printf("#");
			printf("\n");
		}
	}
}
