#include "lists.h"

/**
 * list_len - does some stuff and some other stuff
 * @h: list t pointer
 * Return: elements no
 */
size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h != NULL)
	{
		f += 1;
		h = h->next;
	}
	return (f);
}

