#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: a pointer to the list
 * @n: the number in the node
 *
 * Return: a pointer to the modified list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}


	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);

}
