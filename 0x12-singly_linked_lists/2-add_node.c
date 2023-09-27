#include "lists.h"

/**
 * add_node - adds a new node at beginning
 * @head: pointer doubled
 * @str: string
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nr;
	unsigned int tool = 0;

	while (str[tool])
	{
		tool += 1;
	}

	nr = malloc(sizeof(list_t));
	if (nr == NULL)
	{
		return (NULL);
	}

	nr->str = strdup(str);
	nr->len = tool;
	nr->next = (*head);
	(*head) = nr;

	return (*head);
}

