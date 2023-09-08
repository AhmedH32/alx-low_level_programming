#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min of array
 * @max: max of array
 * Return: NULL if fail or if min > max pointer otherwise
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		arr[i] = min;
	return (arr);
}
