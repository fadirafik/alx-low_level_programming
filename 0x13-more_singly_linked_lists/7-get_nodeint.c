#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the index
 * given
 * @head: pointer to the head of the list
 * @index: the index that should be returned
 *
 * Return: a pointer to the node at the specific index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *temp = head;

    while (temp && i < index)
    {
        temp = temp->next;
        i++;
    }
    return (temp ? temp : NULL);
}