#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *cur = head, *tmp;

	if (head == NULL)
		return;
	while (cur != NULL)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}


}
