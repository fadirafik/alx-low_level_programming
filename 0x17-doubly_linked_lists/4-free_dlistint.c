#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a pointer to the head of a doubly linked list
 * Return: nothing
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
