#include "lists.h"

/**
 * listint_len - returns num of nodes
 * @h: head node
 * Return: number size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
