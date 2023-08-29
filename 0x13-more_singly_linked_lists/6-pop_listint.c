#include "lists.h"

/**
 * pop_listint - pops the first item in a linked list
 * @head: a pointer to a linked list
 *
 * Return: head
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i = (*head)->n;

	if (!head)
	{
		return (0);
	}
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (i);
}
