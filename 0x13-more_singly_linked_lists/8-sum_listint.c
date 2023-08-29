#include "lists.h"

/**
 * sum_listint - sums up the numbers in a linked list
 * @head: pointer to the head of a linked list
 *
 * Return: sum of the numbers
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (!head)
	{
		return (0);
	}
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
