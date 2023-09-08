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
	unsigned int i;
	char *newptr, *oldptr;

	oldptr = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(sizeof(*newptr) * new_size);
	if (newptr == NULL)
		return (NULL);
	for (i = 0; i < new_size; i++)
	{
		if (i <= old_size)
			newptr[i] = oldptr[i];
	}
	free(ptr);
	return (newptr);
}
