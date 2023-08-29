#include "main.h"

/**
* print_diagsums - prints the sum of diagonals
* @a: the pointer to the array however casted to an int *
* @size: of the array
* Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
				sum1 += *(a + (size * i) + j);
			if (j == size - i - 1)
				sum2 += *(a + (size * i) + j);
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
