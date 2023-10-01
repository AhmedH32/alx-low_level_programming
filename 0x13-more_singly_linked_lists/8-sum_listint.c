#include "list.h"

/**
 * sum_listint - sums the n data of linked list
 * @head: head node
 * Return: the sum of all n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
