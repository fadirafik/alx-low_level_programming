#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a certain index
 * @h: a pointer to the doubly linked list
 * @idx: index to be used in node insertion
 * @n: number to be inserted at the node
 * Return: the address of the new node or null if not
 * successfull
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *temp = *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	while (temp)
	{
		if (i == idx)
		{
			new->n = n;
			(temp->next)->prev = new;
			new->next = temp->next;
			temp->next = new;
			new->prev = temp;

			return (temp);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
