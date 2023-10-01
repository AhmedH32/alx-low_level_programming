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

	if (!head)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < idx; i++)
	{
		tmp = *head;
		head = (*head)->next;
		if (*head == NULL)
		{
			if (i != index - 1)
				return (NULL);
		}
	}
	tmp->next = newnode;
	newnode->next = *head;
	return (newnode);
}
