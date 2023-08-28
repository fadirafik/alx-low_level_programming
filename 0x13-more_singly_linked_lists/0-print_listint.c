#include "lists.h"

/**
 * print_listint - prints the number of nodes in a list
 * @h: list input
 *
 * Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
