#include "lists.h"

/**
 * add_node - adds a new node to a linked list
 * @head: pointer to the node head
 * @str: string to be added to the new node
 *
 * Return: address of the new element or null if
 * failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *word = strdup(str);

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = word;
	new->len = strlen(word);
	new->next = *head;
	*head = new;

	return (*head);
}
