#include "function_pointers.h"

/**
 * array_iterator - executes an action on each element of an array
 * @array: pointer to array
 * @size: size of array
 * @action: pointer to fn with action
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
