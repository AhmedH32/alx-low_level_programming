#include "lists.h"
#include <strings.h>

/**
 * add_node - adds a node at the beginning of the list
 * @head: double pointer to the head node
 * @str: string to add in list
 * Return: pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	char *str2 = strdup(str);
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
		return (NULL);
	while (str[len])
		len++;
	p->str = str2;
	p->len = len;
	p->next = *head;
	*head = p;
	return (p);
}
