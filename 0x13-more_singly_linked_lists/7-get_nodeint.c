#include "lists.h"

/**
 * get_nodeint_at_index - gets node at nth index
 * @head: pointer to head node
 * @index: index of node starting at 0
 * Return: address of node or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i <= index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
