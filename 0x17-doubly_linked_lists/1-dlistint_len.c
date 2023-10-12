#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a
 * linked list
 * @h: a pointer to the head of a linked list
 * Return: the size of a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *temp = h;

	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
