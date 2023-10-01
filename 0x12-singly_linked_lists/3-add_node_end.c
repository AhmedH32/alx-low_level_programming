#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: double pointer to the head node
 * @str: str to put in node
 * Return: NULL if fail address of new node if successful
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *h = malloc(sizeof(list_t));
	list_t *cur;

	cur = *head;
	if (h == NULL)
		return (NULL);
	while (str[len])
		len++;
	h->len = len;
	h->str = strdup(str);
	if (*head == NULL)
	{
		*head = h;
		return (h);
	}
	while (cur->next != NULL)
		cur = cur->next;
	cur->next = h;

	return (h);
}
