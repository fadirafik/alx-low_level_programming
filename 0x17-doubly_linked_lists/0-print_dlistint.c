#include "lists.h"

/**
 * print_dlistint - prints a list from a doubly
 * linked list
 * @h: a pointer to the head of a doubly linked list
 * Return: the size of the linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
