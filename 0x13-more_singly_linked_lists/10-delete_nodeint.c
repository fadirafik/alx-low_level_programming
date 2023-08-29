#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at a certain given index
 * @head: pointer to the head of a linked list
 * @index: index given to delete the node at
 *
 * Return: 1 for success and -1 for failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = *head, *temp2 = *head;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (i = 0; temp && temp2 && i < index; i++)
	{
		if (!temp || !temp->next)
			return(-1);
		temp = temp->next;
		if (i == (index - 2))
			temp2 = temp;
	}
	temp2->next = temp->next;
	free(temp);
	return (1);
}
