#include "main.h"
#include <stdio.h>

/**
* print_buffer - outputs given bugger
* @b: said buffer
* @size: size of the buffer
* Return: nothing void
*/
void print_buffer(char *b, int size)
{
	int k, l, i;

	k = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		l = size - k < 10 ? size - k : 10;
		printf("%08x: ", k);
		for (i = 0; i < 10; i++)
		{
			if (i < l)
				printf("%02x", b[k + i]);
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < l; i++)
		{
			int z = b[k + i];

			if (z < 32 || z > 132)
			{
				z = '.';
			}
			printf("%c", z);
		}
		printf("\n");
		k += 10;
	}
}
