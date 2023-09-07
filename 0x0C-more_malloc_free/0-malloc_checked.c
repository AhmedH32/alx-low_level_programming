#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memory to allocate in bytes
 * Return: pointer to allocated memory or exits with status 98
 */
void *malloc_checked(unsigned int b)
{
	int *str = malloc(b);

	if (str == NULL)
		exit(98);
	return (str);
}
