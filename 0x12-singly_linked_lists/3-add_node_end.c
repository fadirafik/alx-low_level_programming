#include "lists.h"

/**
 * add_node_end - adds a node in the end of a linked list
 * @head: pointer to the head of a linked list
 * @str: string input
 *
 * Return: a pointer to the list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp = *head;
	int i = 0;
	char *word;

	while (str[i])
		i++;

	word = strdup(str);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->str = word;
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (new);

}
