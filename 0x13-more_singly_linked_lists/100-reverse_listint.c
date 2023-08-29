#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to a linked list
 *
 * Return: a new reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = NULL, *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = cur;
		cur = *head;
		*head = temp;

	}
	*head = cur;
	return (*head);
}
