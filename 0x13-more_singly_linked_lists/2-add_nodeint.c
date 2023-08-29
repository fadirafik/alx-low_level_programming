#include "lists.h"

/**
 * add_nodeint - adds a new node to a list
 * @head: a pointer to the head of a lisst
 * @n: integer to be inserted
 *
 * Return: a pointer to the list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *temp;

    temp = malloc(sizeof(listint_t));
    if (!temp)
    {
        free(temp);
        return (NULL);
    }
    temp->n = n;
    temp->next = *head;
    *head = temp;

    return (*head);
}