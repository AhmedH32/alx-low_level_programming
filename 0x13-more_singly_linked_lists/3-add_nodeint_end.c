#include "lists.h"

/**
 * add_nodeint_end - adds a newnode at the end of the list
 * @head: double pointer to the head node
 * @n: data field
 * Return: NULL if fail address of new node if successful
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *cur = *head;

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = newnode;
	return (newnode);
}
