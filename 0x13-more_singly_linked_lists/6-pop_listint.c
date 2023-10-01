#include "lists.h"

/**
 * pop_listint - frees the head node
 * @head: double pointer to head node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp->next;
	return (data);
}
