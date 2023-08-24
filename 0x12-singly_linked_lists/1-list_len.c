#include "lists.h"

/**
 * list_len - returns the size of a linked list
 * @h: linked list input
 *
 * Return: size of a linked list
*/
size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
