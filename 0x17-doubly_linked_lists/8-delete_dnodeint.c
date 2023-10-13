#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a certain index
 * @head: a pointer to a head of a doubly linked list
 * @index: index to be deleted at
 * Return: 1 on success and -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;
    dlistint_t *todel;

	while (temp)
	{
        if (temp == NULL)
        {
            free(temp);
            return (1);
        }
        if (temp->next == NULL && temp->prev == NULL)
        {
            free(temp);
            return (1);
        }
        if (index == 0)
        {
            todel = temp;
            (temp->next)->prev= NULL;
            *head = temp->next;
            free(todel);
            return (1);
        }
		if (i == index)
		{
            todel = temp;
            (temp->next)->prev= temp->prev;
            (temp->prev)->next= temp->next;
            free(todel);
            return (1);
        }
		temp = temp->next;
		i++;
	}
	return (-1);
}
