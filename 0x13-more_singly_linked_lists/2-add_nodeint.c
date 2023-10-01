#include "lists.h"

/**
 * add_nodeint - adds node at the beginning of linked list
 * @head: double pointer to head node
 * @n: data field
 * Return: NULL if fail address of new node if successful
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
