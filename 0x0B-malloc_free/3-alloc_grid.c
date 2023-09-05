#include "main.h"

/**
 * alloc_grid - returns a pointer to 2d array
 * @width: width of said array
 * @height: height of array
 * Return: NULL on failure pointer to pointer othewise
 */
int **alloc_grid(int width, int height)
{
	int **rowptr, i, fail = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	rowptr = malloc(sizeof(int *) * height);
	if (rowptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		rowptr[i] = malloc(sizeof(int) * width);

		if ((rowptr[i]) == NULL)
		{
			fail = 1;
		}
	}
	if (fail)
	{
		for (i = 0; i < height; i++)
			free(rowptr[i]);
		free(rowptr);
	}
	return (rowptr);
}
