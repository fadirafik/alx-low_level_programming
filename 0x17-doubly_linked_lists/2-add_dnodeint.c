#include "lists.h"

/**
 * add_dnodeint - adds a new node to a linked list
 * @head: a pointer to the head of a doubly linked list
 * @n: the integer to be inserted into a new node
 * Return: a pointer to the list's head
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
