#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_s - a struct for a linked list list_t
 * @str: string
 * @len: an int
 * @next: link to the next member of the list
 */
typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);



#endif
