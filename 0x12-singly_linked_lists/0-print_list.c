#include "lists.h"

/**
 * print_list - prints all members of a linked list
 * @h: pointer to the head node
 * Return: number containing the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num += 1;
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (num);
}
