#include "main.h"

/**
 * alloc_grid - returns a pointer to 2d array
 * @width: width of said array
 * @height: height of array
 * Return: NULL on failure pointer to pointer othewise
 */
int **alloc_grid(int width, int height)
{
	int **rowptr, i;


	rowptr = malloc(sizeof(int *) * height);
	for (i = 0; i < width; i++)
	{
		rowptr[i] = malloc(sizeof(int) * width);
	}
	return (rowptr);
}
