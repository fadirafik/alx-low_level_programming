#include "hash_tables.h"

/**
 * hash_table_print - prints a hash tables
 * @ht: a pointer to a hash table
 * Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int count = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];

		if (temp == NULL)
		{
			continue;
		}
		else if (count)
		{
			printf(", ");
		}
		while (temp)
		{
			if (temp->next == NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
			}
			else
			{
				printf("'%s': '%s', ", temp->key, temp->value);
			}
			temp = temp->next;
			count++;
		}
	}
	printf("}\n");
}
