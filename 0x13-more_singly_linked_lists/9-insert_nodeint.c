#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at index
 * @head: pointer to the head of a linked list
 * @idx: index for pointer insertion
 * @n: number to be inserted
 *
 * Return: pointer to the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !temp)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (temp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
