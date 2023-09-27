#ifndef LISTS
#define LISTS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_m - a linked list singly
 * @str: pointer to char array
 * @len: length of the array
 * @next: point to next node
 */
typedef struct list_m
{
	unsigned int len;
	char *str;
	struct list_m *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);






#endif
