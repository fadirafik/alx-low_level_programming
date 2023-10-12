#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at a certain index
 * @head: a pointer to the head of the doubly linked list
 * @index: index to be searched inside
 * Return: the specific node searched for
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		if (i == index)
			return (temp);
		temp = temp->next;
		i++;
	}
	return (NULL);
}
