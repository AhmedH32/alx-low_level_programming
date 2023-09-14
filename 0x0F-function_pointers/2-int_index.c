#include "function_pointers.h"

/**
 * int_index - searches through an array
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function compare
 * Return: -1 if no element is found or if size <= 0 returns index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	return (-1);
}
