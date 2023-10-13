#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a
 * doubly linked list
 * @head: a pointer to the head of the list
 * @n: the number to be inserted at the end of the list
 * Return: a pointer to the head of the list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
	{
		*head = new;
	}
	new->prev = temp;

	return (new);
}
