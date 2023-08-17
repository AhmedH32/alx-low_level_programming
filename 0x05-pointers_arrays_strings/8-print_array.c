#include "main.h"

/**
 * print_array - prints n nubmer of elements
 * @a: pointer to array
 * @n: number of elements
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	if(n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", *(a + i));
			if (i < n - 1)
				printf(", ");
			else
				printf("\n");
		}
	}
	else
		printf("\n");
}
