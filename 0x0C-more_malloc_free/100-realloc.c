#include "main.h"

/**
 * _realloc - reallocates memoory using malloc and free
 * @ptr: pointer to old memory
 * @old_size: size of old memory
 * @new_size: new size
 * Return: NULL if faill otherwise pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, j;
	char *newptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		newptr = malloc(sizeof(*newptr) * new_size);
		if (newptr == NULL)
			return (NULL);
		return (newptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < new_size; i++)
	{
		if (i <= old_size)
			newptr = ptr[i];
	}
	return (newptr);
}