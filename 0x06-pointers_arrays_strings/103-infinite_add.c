#include "main.h"

/**
 * infinite_add - adds to digit stored in string and then stores in string
 * @n1: first string
 * @n2: second string
 * @r: storage string
 * @size_r: size of buffer incase of overflowreturn 0
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if ((i + j) > size_r)
		return (0);
	for (k = 0; k < i; k++)
	{
		r[k] = n1[k];
	}
	for (k = 0; k < j; k++)
	{
		r[k + i] = n2[k];
	}
	r[k + i] = '\0';
	return (r);


}
