#include "lists.h"

/**
 * sum_dlistint - sums up all the nodes of a
 * doubly linked list
 * @head: a pointer to the head of a doubly linked list
*/
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
