#include "lists.h"

/**
 * free_list - frees a newly created list
 * @head: pointer to a new list
 *
 * Return: nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
