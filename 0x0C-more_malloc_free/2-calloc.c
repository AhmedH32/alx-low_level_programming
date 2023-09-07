#include "main.h"

/**
 * _calloc - allocates memory for an array and sets it to 0
 * @nmemb: no of elements
 * @size: size of each element
 * Return: NULL if fail pointer to memory otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;
	return (ptr);
}
