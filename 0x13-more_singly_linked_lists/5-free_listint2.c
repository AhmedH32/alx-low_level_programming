#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head pointer to null
 * @head: double pointer head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head->next;
		free(*head);
		*head = tmp;
	}
	*head = NULL;
}
