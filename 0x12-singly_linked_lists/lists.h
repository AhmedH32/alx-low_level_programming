#ifndef LISTS_H
#define LISTS_H

struct list_t
{
	char *str;
	int len;
	struct list_t *next;
};

size_t print_list(const list_t *h);





#endif
