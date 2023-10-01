#include "lists.h"

/**
 * delete_nodeint_at_index - delets node at an index
 * @head: double pointer to head node
 * @index: index of node to remove
 * Return: 1 if successful -1 else
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *cur, *prev;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		cur = *head;
		*head = cur->next;
		free(cur);
		return (1);
	}
	cur = *head;
	for (i = 0; cur && i < index; i++)
	{
		prev = cur;
		cur = cur->next;
		if (i == index - 1)
		{
			prev->next = cur->next;
			free(cur);
			return (1);
		}
	}
	return (-1);
}
