#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: input linked list
 *
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t num = 0;
	char *word;
	unsigned int len;

	while (h != NULL)
	{
		word = h->str;
		len = h->len;
		if (h->str == NULL)
		{
			word = "(nil)";
			len = 0;
		}
		printf("[%d] %s\n", len, word);
		num++;
		h = h->next;
	}
	return (num);
}
