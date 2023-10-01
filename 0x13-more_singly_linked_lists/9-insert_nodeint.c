#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at index idx
 * @idx: index to to insert node into
 * @n: data to put in node
 * @head: double pointer to head node
 * Return: address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
		tmp = *head;
	for (i = 0; i < idx; i++)
	{
		if (tmp == NULL)
		{
			if (i != idx - 1)
				return (NULL);
		}
		if (i == idx - 1)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
