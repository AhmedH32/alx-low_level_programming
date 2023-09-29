#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_t - a struct for a linked list list_t
 * @str: string
 * @len: an int
 * @next: link to the next member of the list
 */
struct list_t
{
	char *str;
	int len;
	struct list_t *next;
};

size_t print_list(const list_t *h);





#endif
