#include "lists.h"

/**
 * list_len - prints length of linked list
 * @h: head of said list
 * Return: number
 */
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
